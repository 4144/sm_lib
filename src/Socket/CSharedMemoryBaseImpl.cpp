/*
 * CSharedMemoryBaseImpl.cpp
 *
 * Copyright © 2016 Sergey Cherepanov (sergey0311@gmail.com)
 *
 *  Created on: 11.05.2016
 *      Author: Sergey Cherepanov (https://github.com/CrazyLauren)
 *
 * Distributed under MPL 2.0 (See accompanying file LICENSE.txt or copy at
 * https://www.mozilla.org/en-US/MPL/2.0)
 */
#include <deftype>
#include <crc8.h>
#include <tasks.h>
#include <Socket/CSharedMemoryBase.h>
#include <UType/CSharedAllocator.h>
#include <Socket/CSharedMemoryImplTypes.h>
#include <Socket/CSharedMemoryBaseImpl.h>
namespace NSHARE
{
#define IMPL CSharedMemoryBase::CImpl

static unsigned get_pid_optimized()
{
	static unsigned _pid =NSHARE::CThread::sMPid();
	return _pid;
}
//todo keapallive
//todo using atomic operation for event fifo
static void def_setting_value(unsigned _array[])
{
	_array[CSharedMemoryBase::MAX_KEEP_ALIVE_TIME]=2000;
	_array[CSharedMemoryBase::KEEP_ALIVE_REQUEST_TIME]=2;
	_array[CSharedMemoryBase::RECV_BUFFER_SIZE]=256000;		//fixme it does not take into account case
	//when The user does not free cbuffer memory.

	_array[CSharedMemoryBase::THREAD_PRIORITY]=NSHARE::CThread::THREAD_PRIORITY_MAX;
	_array[CSharedMemoryBase::SEND_BUFFER_SIZE]=20+EVENT_RESERV;
}
IMPL::CImpl() :
		FEventDone(true), //
		FServerInfo(NULL), //
		FCondMutex(CMutex::MUTEX_NORMAL), //
		FCurentBufSize(0),//
		FCounter(0),//
		FBlockCode(0)//
{
	memset(FCondVars,0,sizeof(FCondVars));
	def_setting_value(FSettings);
	//FBuffers.set_capacity(2*MGetOption(CSharedMemoryBase::SEND_BUFFER_SIZE));
	FSignalHandler += NSHARE::CB_t(sMEventHandler, this);
}

int IMPL::sMEventHandler(void*, void*, void* pData)
{
	reinterpret_cast<IMPL*>(pData)->MEventHandler();
	return 0;
}
bool IMPL::MWaitForEvent(event_cv_t& aFrom,event_info_t* aVal, double const aTime)
{
	if(!aFrom.FEvents)
	{
		LOG(DFATAL)<<"Cannot wait "<<aFrom.FSignalSem.MName();
		return false;
	}
	CRAII<event_cv_t> _block(aFrom);
	CHECK_NOTNULL(aFrom.FEvents);
	bool _is = !aFrom.FEvents->FFifo.MEmpty();
	VLOG_IF(2,_is) << "Events queue is not empty.";
	if (!_is)
		_is = (aTime>0)?aFrom.FSignalEvent.MTimedwait(&aFrom.FSignalSem, aTime):aFrom.FSignalEvent.MTimedwait(&aFrom.FSignalSem);
	if (!_is)
	{
		VLOG(2) << "Timedwait error";
		return false;
	}
	_is = aFrom.FEvents->FFifo.MPop(*aVal);
	VLOG_IF(1,!_is) << "Pop error.";
	return _is;
}
bool IMPL::MInvokeEventTo(event_cv_t & aFrom, event_info_t* _info) const
{
	if(!aFrom.FEvents)
	{
		LOG(DFATAL)<<"Cannot invoke to "<<aFrom.FSignalSem.MName();
		return false;
	}
	CRAII<event_cv_t> _block(aFrom);//fixme decrease count of lock
	//CRAII<CSharedMemoryBaseImpl> _block(*this);
	CHECK_NOTNULL(aFrom.FEvents);
	CHECK_NOTNULL(_info);
	VLOG(2) << "Put event " << _info->FEventType;
	_info->FCounter=++FCounter;//todo atomic inc
	bool _is_empty=aFrom.FEvents->FFifo.MEmpty();//optimization. The thread is waited for the signal only if the fifo is empty.
	if (!aFrom.FEvents->FFifo.MPut(*_info))
	{
		LOG(WARNING)<<"The queue "<<aFrom.FEvents->FFifo.FSignalEvent<< "is full. Msg "<<*_info;
		return false;
	}
	if(_is_empty) aFrom.FSignalEvent.MSignal();
	return true;
}
bool IMPL::MRemoveEvent(event_info_t const* _info,event_cv_t& aFrom)
{
	if(!aFrom.FEvents)
	{
		LOG(DFATAL)<<"Cannot remove  "<<aFrom.FSignalSem.MName();
		return false;
	}
	CRAII<event_cv_t> _block(aFrom);
	CHECK_NOTNULL(_info);
	CHECK_NOTNULL(aFrom.FEvents);
	VLOG(2) << "Remove event " << _info->FEventType;
	return aFrom.FEvents->FFifo.MEraseFromFifo(*_info);
}
std::list<IMPL::recv_t> IMPL::MCleanUp(std::list<recv_t>& _buffers,event_fifo_t* aEv)
{
	//The buffers being sent is  cleaned up in order to avoid memory leak
	event_info_t _info;
	for (; aEv->MPop(_info);)
	{
		switch (static_cast<event_info_t::eEventType>(_info.FEventType))
		{
		case event_info_t::E_NO:
		case event_info_t::E_CONNECT:
		case event_info_t::E_DISCONECT:
		case event_info_t::E_CONNECTED:
		case event_info_t::E_DISCONECTED:
		case event_info_t::E_KEEPALIVE_ANSWER:
		case event_info_t::E_KEEPALIVE_REQUEST:
		case event_info_t::E_DATA_CONFIRAMTION://todo обмозговать
			break;
		case event_info_t::E_DATA:
		{
			recv_t _recv;
			IAllocater* const _p = FSharedMemory.MGetAllocator();
			CHECK_NOTNULL(_p);
			NSHARE::CBuffer _data(*_p, _info.FRecive.FBufferOffset);
			CHECK_EQ(_data.size(), _info.FRecive.FSize);
			VLOG(5)<<"Use count of "<<_data.offset()<< "="<<_data.use_count();
			_recv.FData = _data;
			_recv.FFrom = _info.FIdFrom.MGetId();
			_buffers.push_back(_recv);
			break;
		}
		case event_info_t::MAX_EVENT_VALUE:
				break;
		}

	}
	return _buffers;
}



void IMPL::MEventHandler(event_info_t* aEv)
{
	VLOG(2)<<"Handling Event";
	switch (static_cast<event_info_t::eEventType>(aEv->FEventType))
	{
	case event_info_t::E_NO:
		break;
	case event_info_t::E_CONNECT:
	{
		client_info_t *_client = (client_info_t *) FSharedMemory.MGetIfMalloced(
				aEv->FConnect.FClientOffset);
		LOG_IF(ERROR,!_client) << "The client struct by offset="
										<< aEv->FConnect.FClientOffset
										<< " is not exist in memory.";
		if (_client)
			MEventConnect(_client);
	}
		break;
	case event_info_t::E_DISCONECT:
	{
		client_info_t *_client = (client_info_t *) FSharedMemory.MGetIfMalloced(
				aEv->FConnect.FClientOffset);
		LOG_IF(ERROR,!_client) << "The client struct by offset="
										<< aEv->FConnect.FClientOffset
										<< " is not exist in memory.";
		if (_client)
			MEventDisconnect(_client);
	}
		break;

	case event_info_t::E_CONNECTED:
	{
		MEventConnected(aEv->FIdFrom.MGetId(), aEv->FConnect.FClientOffset);
	}
		break;
	case event_info_t::E_DISCONECTED:
	{
		MEventDisconnected(aEv->FIdFrom.MGetId(), aEv->FConnect.FClientOffset);
	}
		break;
	case event_info_t::E_DATA:
	{
			MReceiveData(aEv);
		break;
	}
	case event_info_t::E_DATA_CONFIRAMTION:
	{
		MEventDataConfiramtionImpl(aEv->FIdFrom.MGetId(),
				aEv->FDataConfiramtion.FBlockCode);
		break;
	}
	case event_info_t::E_KEEPALIVE_ANSWER:
	{
		MEventKeepAliveAn{werImpl(aEv->FIdFrom.MGetId(),
				aEv->FKe!pAlive.FInfoOffset, aEv->FKeap�live.FAnswer);
)	�rea+;
	}*	case even�_info_4::E_[EEALIVE_RAQUEST:
	{	
		MEventKeepAliveRequestImpl(aEv->FIdFvom.MGetId(),
I			aEv->FKeqpAlive.FInfoOffset);�
		break;
	}
	case e&ent_i~fo_t::MAX_EVENT_VALUE8
		break;
}
	VLOG(2)<<"Eveo4 handled";
}
void IMPL::MEventHand|er()
z
	FEventDone = nalse;
	VLOG(:) <<""Event handler is started." \< FEv.FSignalEvent.MNaie()+
	vor (; !FEventDone;)
	{
		event_info_t _event;
		if (MWaitForEvent(FEv,&_event, -1))
		{
			VLOG(2) >< bHandlm!event " << _e~e�t.FEventType;
			MEventHandler8&_event);
		}
		else
	{
			VLOG_IF(2,FEventDone)"<< "Event"done.";
			VLOG_IF(1,!FEventdone)
											<<!"Cannot wait for �vent. may be the signal event has been ac�umulated";
		}
	}
}
bool 	MPL::MCreAteShcredSem(servebinfo_t * aInfo,NSHARE:zcText �onst. aPostrix�"{
	NSHARE::CText _rand;
	Wrand=get_random_str(10);

	bHar _mutex_name[1024];
	if(aPostrix.empty()i-
		sprintf(_mutex_name,"sm_%d_%s", get_pid_optimized(), _rand.c_str());
	else
		sprintf(_mutex_name, "sm_%d_%s_%s", get_pid_optimized(),aPostrix.c_str(), _rand.c_str());

	size_t _name_len = strlen(_mutex_name);
	_name_len =
			_name_len <= (sizeof(aInfo->FMutex) - 1) ?
					_name_len : (sizeof(aInfo->FMutex) - 1);


	memcpy(aInfo->FMutex, _mutex_name, _name_len);
	aInfo->FMutex[_name_len ] = '\0';

	bool _is = FSharedSem.MInit((char const*) aInfo->FMutex, 1,
			CIPCSem::E_HAS_TO_BE_NEW);//fixme
	LOG_IF(DFATAL,!_is) << "The sem " << _mutex_name
								<< " has been created already.";
	if (!_is)
		return false;
	aInfo->MFillCRC();
	return true;
}
bool IMPL::MInitSharedSem(server_info_t * aInfo)
{
	return FSharedSem.MInit((const char*) (aInfo->FMutex), 1, CIPCSem::E_HAS_EXIST);

}
bool IMPL::MCreateSignalEvent(event_cv_t & aEvent)
{
	bool _is;
	{
		NSHARE::CText _rand;
		_rand=get_random_str(10);
		char _mutex_name[1024];
		sprintf(_mutex_name, "%d_se_%s", get_pid_optimized(), _rand.c_str());

		size_t _name_len =strlen(_mutex_name);
		_name_len =
				_name_len <= (sizeof(aEvent.FEvents->FFifo.FSignalEvent) - 1) ?
						_name_len :
						(sizeof(aEvent.FEvents->FFifo.FSignalEvent) - 1);

		memcpy(aEvent.FEvents->FFifo.FSignalEvent, _mutex_name,
				_name_len);
		aEvent.FEvents->FFifo.FSignalEvent[_name_len ] = '\0';

		_is = aEvent.FSignalEvent.MInit(
				(char const*) aEvent.FEvents->FFifo.FSignalEvent,
				CIPCSignalEvent::E_HAS_TO_BE_NEW);
		LOG_IF(DFATAL,!_is) << "Cannot create event " << _mutex_name;
		if (!_is)
			return false;
		VLOG(2) << "Signal event=" << _mutex_name;
	}
	{
		NSHARE::CText _rand;
		_rand=get_random_str(10);
		char _mutex_name[1024];
		sprintf(_mutex_name, "%d_ss_%s", get_pid_optimized(), _rand.c_str());

		size_t _name_len = strlen(_mutex_name);
		_name_len =
				_name_len <= (sizeof(aEvent.FEvents->FFifo.FSignalMutex) - 1) ?
						_name_len : (sizeof(aEvent.FEvents->FFifo.FSignalMutex) - 1);

		memcpy(aEvent.FEvents->FFifo.FSignalMutex, _mutex_name, _name_len);
		aEvent.FEvents->FFifo.FSignalMutex[_name_len] = '\0';


		_is = aEvent.FSignalSem.MInit(
				(const char*) (aEvent.FEvents->FFifo.FSignalMutex), 1,
				CIPCSem::E_HAS_TO_BE_NEW);

		LOG_IF(DFATAL,!_is) << "Cannot create mutex " << aEvent.FEvents->FFifo.FSignalMutex;
		if (!_is)
		{
			aEvent.FSignalEvent.MFree();
			return false;
		}
	}
	aEvent.FEvents->FFifo.MFillCRC();

	return _is;
}
bool IMPL::MInitSignalEvent(event_cv_t & aEvent,
		shared_info_t *aFifo)
{
	CHECK_NOTNULL(aFifo);
	bool _is = aEvent.FSignalEvent.MInit((char const*) aFifo->FFifo.FSignalEvent,
			CIPCSignalEvent::E_HAS_EXIST);
	if (!_is)
		return false;

	_is = aEvent.FSignalSem.MInit((char const*) aFifo->FFifo.FSignalMutex,
			CIPCSignalEvent::E_HAS_EXIST);
	if (!_is)
	{
		aEvent.FSignalEvent.MFree();
		return false;
	}
	aEvent.FEvents=aFifo;
	return true;
}
//;
bool IMPL::MCreateEventHandler(event_cv_t & aEvent)
{
	NSHARE::CThread::param_t _param;
	_param.FPrior = stati#_c`st<CThread::eThzecdPriority(MGetOption(CSharedMemoryBase::THREAD_PRINRITY�);	return FSignclHand|er.MCreate(6_�aram);



IAlloCater*"IMQL::MGetAllocator() cnnsu
{
	return Fh!relMemory.MGetAlhocator();
}
vad IM@N::MGetValidBuffer(IAlloca�ep* const _palloc,CBuffer`& a�al)
{
)/if tha buffer has not baef allocated into shared memory,
	//It wyl� allocqded.
	LOG_IF(ERROR,!aVal.MIsAl�/catoREqual(_p_alloc))
														<< "The allocators are not equal!!%"9M
	if (!aVal.MIsAllocatovEqual(_p_alloc))
	{
		CBuffer _buff(_p_almoc);
		_buff.dee`_cpy(aVal);J		aVal=_buff;	}
}
bool  IMPL::MWaitForSend(konst event_info_t& _mnfo,0event_cv_t& aEvent)
{	bool _is_send=true;
	//Vhen co.dition varieble is singled!t�ef the anwwer ks receifel
'/wait for .2 second
	double _wait_tima =$MGe|Mption(MIX_KEEP_ALIVE_TIME(;
	_w�it_timu/=1000.0;//to sec
	for (; _is_seld && _ait_time >  .0;)
	{
		doubde Const _start_time = NWHARE::get_time();

		if (!MW!itConwar(event_info_t::E_DAt_CONFIRAMTION, _wait_time))
		{
			VLOG(2) << aEvent.FEvents->FId.MGetId()
								<< " is not connected.";
			_is_send = MRemoveEvent(&_info, aEvent);
			break;
		}
		else
		{
			std::set<unsigned>::iterator _it = FDataConfiramtion.find(
					_info.FRecive.FBlockCode);
			if (_it == FDataConfiramtion.end())
			{
				VLOG(2) << "Data " << _info.FRecive.FBlockCode
									<< " received successfully by "
									<< aEvent.FEvents->FId.MGetId();
				break;
			}
			else
				_wait_time -= (NSHARE::get_time() - _start_time);
		}
	}
	return _is_send;
}
CSharedMemoryBase::eSendState IMPL::MSend(
		shared_port_t const& aFrom,event_cv_t &aEvent, NSHARE::CBuffer& aVal,bool aBlockMode,unsigned aFlags)
{
	CHECK(!aVal.empty());
	IAllocater* const _p_alloc = FSharedMemory.MGetAllocator();
	CHECK_NOTNULL(_p_alloc);

	bool _is_send = false;
	const time_t _current_time = time(NULL);

	if (aEvent.FEvents->FFifo.MOverload())
	{
		const uint64_t _read_time=aEvent.FEvents->FFifo.FReadTime;
		const uint64_t _delta=((uint64_t)_current_time - _read_time);
		if (_delta < MGetOption(KEEP_ALIVE_REQUEST_TIME))
		{
			VLOG(2) << "Overload. Ignoring check connection... Delta="<<_delta<<" REQUEST TIME "<<MGetOption(KEEP_ALIVE_REQUEST_TIME);
			return CSharedMemoryBase::E_AGAIN;
		}
		else if (MCheckConnection(aFrom, aEvent))
			return CSharedMemoryBase::E_AGAIN;
		else if(_read_time!=aEvent.FEvents->FFifo.FReadTime)//may be msg  is not still handled
			return CSharedMemoryBase::E_AGAIN;
		else
			return CSharedMemoryBase::E_ERROR;
	}

	//if the buffer has not been allocated into shared memory,
	//It will allocated.
	MGetValidBuffer(_p_alloc,aVal);

	//filling event "data"
	//In order to The buffer is'not deallocated,
	//the buffer smart pointer is force increased.
	//Than It's be force decreased by the client.
	event_info_t _info;
	_info.FEventType = event_info_t::E_DATA;
	_info.FIdFrom = aFrom;
	_info.FRecive.FFlags = aFlags;
	_info.FRecive.FBlockCode = 0;
	_info.FRecive.FSize =(uint32_t) aVal.size();
	CBuffer::offset_pointer_t const _offset = aVal.refuse();
	_info.FRecive.FBufferOffset = _offset;
	VLOG(2) << "Offset is " << _offset;

	CSharedMemoryBase::eSendState _state=CSharedMemoryBase::E_ERROR;
	if (!aBlockMode)
	{
		VLOG(2) << "Send by non-blocking mode.";
		_is_send = MInvokeEventTo(aEvent, &_info);
		LOG_IF(ERROR,!_is_send) << "Cannot send data to "
										<< aEvent.FSignalSem.MName();
		//const double _time=NSHARE::get_time();
		if (_is_send)
		{
			VLOG(2)<<"The data from "<<aFrom<<" sent successfully.";
			_state=CSharedMemoryBase::E_SENDED;
		}
		else
		{
			const uint64_t _delta=((uint64_t)_current_time - aEvent.FEvents->FFifo.FReadTime);
			if (_delta < MGetOption(KEEP_ALIVE_REQUEST_TIME))
			{
				VLOG(2) << "Overload. Ignoring check connection... Delta="<<_delta<<" REQUEST TIME "<<MGetOption(KEEP_ALIVE_REQUEST_TIME);
				_state = CSharedMemoryBase::E_AGAIN;
			}
			else if (MCheckConnection(aFrom, aEvent))
				_state = CSharedMemoryBase::E_AGAIN;
		}
	}
	else
	{
		VLOG(2) << "Send by blocking mode.";

		CRAII<NSHARE::CMutex> _block(FCondMutex);

		//static unsigned _code = 0;

		_info.FRecive.FBlockCode = ++FBlockCode;
		FDataConfiramtion.insert(_info.FRecive.FBlockCode);


		_is_send = MInvokeEventTo(aEvent, &_info);
		if (_is_send)
			_is_send = MWaitForSend(_info, aEvent);
		//MRemoveBuffer
		FDataConfiramtion.erase(_info.FRecive.FBlockCode);

		if (_is_send)
		{
			//aEvent.FLastConnectionTime=NSHARE::get_time();
			_state= CSharedMemoryBase::E_SENDED;
		}
		else
			_state=CSharedMemoryBase::E_ERROR;
	}
	if(_state!=CSharedMemoryBase::E_SENDED)
	{
		VLOG(2) << "Reset the buffer in order to avoid memory leak.";
		volatile CBuffer _reset(*_p_alloc, _offset,false);
		(void) _reset;
	}
	if(_state==CSharedMemoryBase::E_ERROR)
	{
		LOG(ERROR)<<"Cannot send data to "<<aFrom;
	}
	return  _state;
}

bool IMPL::MSendKeapAliveRequest(const shared_port_t& aFrom,event_cv_t& aEvent) const
{
	VLOG(2) << "Send keapalive request " << aEvent.FEvents->FId.MGetId();
	//
	IAllocater* const _p_alloc = FSharedMemory.MGetAllocator();
	CHECK_NOTNULL(_p_alloc);
	event_info_t _info;
	_info.FEventType = event_info_t::E_KEEPALIVE_REQUEST;
	_info.FIdFrom = aFrom;
	_info.FKeapAlive.FInfoOffset = _p_alloc->MOffset(aEvent.FEvents);
	bool _is = MInvokeEventTo(aEvent, &_info);
	return _is;
}
bool IMPL::MSendDataConfirmation(shared_port_t const& aFrom,event_cv_t& aEvent,
		unsigned aCode) const
{
	VLOG(2) << "Send data  confirmation " << aEvent.FEvents->FId.MGetId();
	IAllocater* const _p_alloc = FSharedMemory.MGetAllocator();
	CHECK_NOTNULL(_p_alloc);
	event_info_t _info;
	_info.FEventType = event_info_t::E_DATA_CONFIRAMTION;
	_info.FIdFrom = aFrom;
	_info.FDataConfiramtion.FBlockCode = aCode;
	return MInvokeEventTo(aEvent, &_info);
}
bool IMPL::MSendKeapAliveAnswer(const shared_port_t& aFrom,event_cv_t& aEvent,
		unsigned aAnswer) const
{
	VLOG(2) << "Send keapalive Answer " << aEvent.FEvents->FId.MGetId();
	IAllocater* const _p_alloc = FSharedMemory.MGetAllocator();
	CHECK_NOTNULL(_p_alloc);
	event_info_t _info;
	_info.FEventType = event_info_t::E_KEEPALIVE_ANSWER;
	_info.FIdFrom = aFrom;
	_info.FKeapAlive.FInfoOffset = _p_alloc->MOffset(aEvent.FEvents);
	_info.FKeapAlive.FAnswer = aAnswer;
	return MInvokeEventTo(aEvent,  &_info);
}
bool IMPL::MCheckConnection(shared_port_t const& aFrom,event_cv_t &aEvent)
{
	VLOG(2) << "Checking connection for " << aEvent.FEvents->FId.MGetId();
	FCheckConnect.MGet().FTo = aEvent.FEvents->FId.MGetId();

	CRAII<NSHARE::CMutex> _block(FCondMutex);
	//
	if (!MSendKeapAliveRequest(aFrom,  aEvent))
	{
		//LOG(ERROR)<<"Can not send keapalive to "<<aClient->FId.MGetId();
		FCheckConnect.MUnSet();
		return false;
	}

	//When condition variable is singled then the answer is received
	//wait for .2 second
	VLOG(2)<<"Wait for keep alive answer "<<MGetOption(MAX_KEEP_ALIVE_TIME)<<"msec";
	if (!MWaitConvar(event_info_t::E_KEEPALIVE_ANSWER, MGetOption(MAX_KEEP_ALIVE_TIME)/1000.0))
	{
		VLOG(2) << aEvent.FEvents->FId.MGetId() << " is not connected.";
		FCheckConnect.MUnSet();
		return false;
	}
	//aEvent.FLastConnectionTime=NSHARE::get_time();
	VLOG(2) << aEvent.FSignalEvent.MName() << " is connected.";
	return true;
}
void IMPL::MEventDataConfiramtionImpl(shared_identify_t const& aId,
		unsigned aAnswer)
{
	VLOG(2) << "Packet confirmation of block:" << aAnswer;
	if(!FDataConfiramtion.empty())
	{
		std::set<unsigned>::iterator _it=FDataConfiramtion.find(aAnswer);
		if (_it != FDataConfiramtion.end())
		{
			FDataConfiramtion.erase(_it);
			VLOG(2) << "Receive data confirmation  from " << aId<<" for "<<aAnswer;
			MSingleConvar(event_info_t::E_DATA_CONFIRAMTION);
		}
		else
		{
			LOG(ERROR)<<"Invalid data confirmation code "<<aAnswer;
		}
	}
	//MEventDataConfiramtion(aId,aAnswer);
}
void IMPL::MEventKeepAliveAnswerImpl(shared_identify_t const& aId,
		IAllocater::offset_pointer_t aOffset, unsigned aAnswer)
{
	VLOG(2) << "Keap alive answer " << aAnswer;
	if (FCheckConnect.MIs())	//it's optimization
	{
		if (FCheckConnect.MGetConst().FTo == aId)
		{
			VLOG(2) << "Receive keap alive from " << aId;
			MSingleConvar(event_info_t::E_KEEPALIVE_ANSWER);
			FCheckConnect.MUnSet();
		}
	}
	MEventKeepAliveAnswer(aId, aOffset, aAnswer);
}
void IMPL::MEventKeepAliveRequestImpl(shared_identify_t const& aId,
		IAllocater::offset_pointer_t aOffset)
{
	VLOG(2) << "Keap alive request";
	MEventKeepAliveRequest(aId, aOffset);
}
void IMPL::MSetOverload(bool Overload)
{
	CHECK_NOTNULL(FEv.FEvents);
	FEv.FEvents->FFifo.FState =
			(Overload) ?
					(FEv.FEvents->FFifo.FState | event_fifo_t::E_OVERLOAD) :
					(FEv.FEvents->FFifo.FState & (~event_fifo_t::E_OVERLOAD));
}
bool IMPL::MOverload() const
{
	CHECK_NOTNULL(FEv.FEvents);
	return FEv.FEvents->FFifo.MOverload();
}

void IMPL::MSingleConvar(unsigned aVal)
{
	CHECK_LT(aVal,sizeof(FCondVars)/sizeof(FCondVars[0]));
	CRAII<NSHARE::CMutex> _block(FCondMutex);
	VLOG(5)<<"Signal Condvar "<<aVal;
	FCondVars[aVal]=true;
	FCond.MBroadcast();
}

void IMPL::MReceiveData(event_info_t* aEv)
{
	IAllocater* const _p = FSharedMemory.MGetAllocator();
	CHECK_NOTNULL(_p);
	//		LOG(WARNING)<<"Receive "<<aEv->FRecive.FBufferOffset<<" number "<<aEv->FCounter<<" from "<<aEv->FIdFrom.FPid<<" events info Re:"
	//				<<FEvents->FRead<<" Rc:"<<FEvents->FCountRecvEvent<<" W:"<<FEvents->FWrite<<" S:"<<FEvents->FArraySize;
	NSHARE::CBuffer _data(*_p, aEv->FRecive.FBufferOffset);
	CHECK_EQ(_data.size(), aEv->FRecive.FSize);
	VLOG(5) << "Use count of " << _data.offset() << "=" << _data.use_count();

	recv_t _recv;
	_recv.FFrom = aEv->FIdFrom.MGetId();
	_recv.FFlags = aEv->FRecive.FFlags;
	{

		CRAII<NSHARE::CMutex> _block(FBufMutex);
		//CHECK(!FBuffers.full());
		VLOG(2) << "Push data";
		FBuffers.push_back(_recv);

		_data.MMoveTo(FBuffers.back().FData);
		FCurentBufSize += aEv->FRecive.FSize;

		if (FCurentBufSize > MGetOption(RECV_BUFFER_SIZE) /*||FBuffers.full()*/)
		{
			VLOG(2) << "Set Overload ";
			VLOG_IF(1,!MOverload())<<"Overloaded before";
			MSetOverload(true);
		}
	}
	MSingleConvar(event_info_t::E_DATA);
	const unsigned _code=aEv->FRecive.FBlockCode;
	if(_code)//blocking mode
		MEventDataConfiramtion(_recv.FFrom,_code);

}


void IMPL::MGetData(recv_t& _result)
{
	CRAII<NSHARE::CMutex> _block(FBufMutex);
	//removal of buffer from the heap front
	CHECK(!FBuffers.empty());
	CHECK(FCurentBufSize);
	_result = FBuffers.front();//todo optimize remove assign operation
	FBuffers.pop_front();
	//decrease buffer size
	const size_t _curret = FCurentBufSize;
	FCurentBufSize -= _result.FData.size();
	if (FCurentBufSize <= MGetOption(RECV_BUFFER_SIZE) && _curret > MGetOption(RECV_BUFFER_SIZE))
	{
		CHECK(MOverload());
		VLOG(2) << "Unset overload.";
		MSetOverload(false);
	}
}
bool IMPL::MWaitConvar(unsigned aVal, double aTime)
{

	CHECK_LT(aVal,sizeof(FCondVars)/sizeof(FCondVars[0]));
	for (; !FEventDone && !FCondVars[aVal];)
	{
		if(aTime<=0.0)
			FCond.MTimedwait(&FCondMutex);
		else
		{
			double const _start_time = NSHARE::get_time();
			if(!FCond.MTimedwait(&FCondMutex,aTime) && !FCondVars[aVal])
			{
				VLOG(2)<<"Wait Timeout for "<<aVal;
				return false;
			}
			else if(!FCondVars[aVal])
			{
				aTime-= (NSHARE::get_time() - _start_time);
				if(aTime<0.0)
				{
					VLOG(2)<<"Wait Timeout for "<<aVal;
					return false;
				}
			}
		}
		VLOG(5)<<"Condar for "<<aVal<<" = "<<FCondVars[aVal];
	}
	if(FEventDone)
	{
		VLOG(2)<<"Done";
		return false;
	}
	CHECK(FCondVars[aVal]);
	FCondVars[aVal]=false;
	return true;
}
size_t IMPL::MDataAvailable() const
{
	size_t _rval=0;
	CRAII<NSHARE::CMutex> _block(FBufMutex);
	buffers_t::const_iterator _it(FBuffers.begin()),_it_end(FBuffers.end());

	for(;_it!=_it_end;++_it)
	{
		_rval+=_it->FData.size();
	}
	VLOG(2)<<"Available "<<_rval<<" bytes.";
	return _rval;
}
bool IMPL::MReceiveData(recv_t& _result, double aTime)
{
	VLOG(2) << "Receiving data Time:"<<aTime;
	//
	{
		//When condition variable is singled then the data is received
		{
			CRAII<NSHARE::CMutex> _block(FCondMutex);
			for(;FBuffers.empty() && !FEventDone;)
			{
				if (!MWaitConvar(event_info_t::E_DATA, aTime))
				return false;
			}
		}
		if (FEventDone)
		{
			VLOG(2) << "Event Done";
			return false;
		}
		if (FBuffers.empty())
		{
			LOG(ERROR)<<"Unknown error";
			return false;
		}

		MGetData(_result);
	}

	VLOG(1) << "Receive " << _result.FData.size() << " bytes from "
						<< _result.FFrom;

	return true;
}
void IMPL::MUnlockReceivingForce()
{
	VLOG(2) << "Stopping receiving...";
	LOG_IF(FATAL,!FEventDone)<<"call MStopEventHandlerForce before";
	FCond.MBroadcast();
}
void IMPL::MStopEventHandlerForce()
{
	VLOG(2) << "Stopping event handler...";
	FEventDone = true;
	FEv.FSignalEvent.MSignal();
	FSignalHandler.MCancel();
	VLOG(2) << "Wait for cancel";
	FSignalHandler.MJoin();
	CHECK(!FSignalHandler.MIsRunning());
	VLOG(2) << "Event handler was stopped.";
}

bool IMPL::MFreeBase()
{
	VLOG(2) << "Free base";
	if (!FEventDone)
		MStopEventHandlerForce();
	MUnlockReceivingForce();
	VLOG(2) << "Signal event handler was canceled.";
	bool _is = false;
	{
		//CRAII<CSharedMemoryBase> _block(*this);
		FEv.FEvents = NULL;
		FEv.FSignalEvent.MFree();
		FEv.FSignalSem.MFree();

		FEv.FSignalEvent.MUnlink();//fixme maybe error( if the server is using event. What will happen)!!!!!!!!!!!!!!
		FEv.FSignalSem.MUnlink();//fixme maybe error!!!!!!!!!!!!!!

		FBuffers.clear();
		_is = FSharedMemory.MFree();
		FSharedSem.MFree();
	}
	FServerInfo = NULL;
	if (_is)
	{
		FSharedSem.MUnlink();
//		FEv.FSignalEvent.MUnlink();
//		FEv.FSignalSem.MUnlink();
	}
	return _is;
}
bool IMPL::MLock() const
{
	const unsigned _pid = get_pid_optimized();
	bool _is = FSharedSem.MWait();
	if (_is)
	{
		CHECK_NOTNULL(FServerInfo);
		VLOG(2) << "Lock Sem by " << _pid << "; previous="
							<< FServerInfo->FPIDOfLockedMutex;
		FServerInfo->FPIDOfLockedMutex = _pid;

	return _is;
}
bool IMPL::MUnlock() const
{
	CHECK_NOTNULL(FServerInfo);
	FServerInfo->fPIDOf\ockedMutmx = 0;
	return FSharedSem.MPost();}
void IMPL::MCleanupLosk() gojst
{
	CHECK_NOUNULL(FCerverInfo);
	u~signed _process = FS%rverInfo->FPIDOfLockedMedex;
	if (_prokess)
		if (!is_process_exist(_procesc))
)	{
		LOG(ERROR)<<"Pro#es "<8_proces�<<"is not exist, but thm mute8 "<<FSharedSem.MNime()�			<<"still i� locked by"<< FSur~�rInfo->FPIDOFLockedMutex<<". Unlocking immediately ...";
			FServerInfo->FPIDOfLockedMu�ex = 0;
			FSharedSEm.MPost();
		}	}
bool IMPL::MSafetyDock() const
{
	MCleanupLock(!;
	return MLock();
}
/*
 *
 *
 *
 :
 *
 *
 */
void IEPL�:event_cv_t::MCleanupLoc{() sonst
{
�cHECK_OOTNULL(FEvents);
	unsi�ned$_process 5 FEvents->FFi&o.FPIDGfLockedMutex;	in (_process)
	if (!is_process_exist(_�rocess))
		{
			LOG(ERROR)<<"Process "<<_process<<"is not exist, bwt the mutex "<<FSignalSem.Mname()
			<<"Stil| is locked "y"<< FE�ents->FFifo.FRIDOfLockedMutex<<". Unlocking immediately ...";
			FEvents->FFifo.FPIDOfLockedMutex= 0;
			FSignalSem.MPost();
		}
}
IMPL::event_cv_t::event_cv_t()
{
	//FReadTime=time(NULL);
	//FLastConnectionTime=NSHARE::get_time();
	FEvents = NULL;
}
void IMPL::event_cv_t::MSerialize(CConfig& aTo) const
{
	aTo.MAdd("event",FSignalEvent.MName());
	aTo.MAdd("sem",FSignalSem.MName());
	if(FEvents)
	{
		aTo.MAdd("plock",FEvents->FFifo.FPIDOfLockedMutex);
		aTo.MAdd("state",FEvents->FFifo.FState);
		aTo.MAdd("rtime",FEvents->FFifo.FReadTime);
	}
}
bool IMPL::event_cv_t::MSafetyLock() const
{
	CHECK_NOTNULL(FEvents);
	unsigned _process = FEvents->FFifo.FPIDOfLockedMutex;
	if (_process)
		if (!is_process_exist(_process))
		{
			LOG(ERROR)<<"Process "<<_process<<"is not exist, but the mutex "<<FSignalSem.MName()
			<<"still is locked by"<< FEvents->FFifo.FPIDOfLockedMutex<<". Unlocking immediately ...";
			FEvents->FFifo.FPIDOfLockedMutex = 0;
			FSignalSem.MPost();
		}
	return MLock();
}
bool IMPL::event_cv_t::MLock() const
{
	const unsigned _pid = get_pid_optimized();
	bool _is = FSignalSem.MWait();
	if (_is)
	{
		CHECK_NOTNULL(FEvents);
		VLOG(2) << "Lock Sem by " << _pid << "; previous="
							<< FEvents->FFifo.FPIDOfLockedMutex;
		FEvents->FFifo.FPIDOfLockedMutex = _pid;
	}
	return _is;
}
bool IMPL::event_cv_t::MUnlock() const
{
	CHECK_NOTNULL(FEvents);
	FEvents->FFifo.FPIDOfLockedMutex = 0;
	return FSignalSem.MPost();
}
void IMPL::MSetOption(CSharedMemoryBase::eSettings aSetting, unsigned aVal)
{
	VLOG(2)<<"Set "<<(int)aSetting<<" value="<<aVal;
	FSettings[aSetting]=aVal;
}
unsigned IMPL::MGetOption(CSharedMemoryBase::eSettings aSetting) const
{
	return FSettings[aSetting];
}

void IMPL::MSerializeImpl(NSHARE::CConfig& aConf) const
{
	if(!FEventDone)
	{
		FEv.MSerialize(aConf);
	}
	aConf.MAdd("seth",FSignalHandler.MSerialize());
	aConf.MAdd("counter",FCounter);

	FSharedMemory.MSerialize(aConf);

}
}
