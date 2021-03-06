/*
 * CFlags.h
 *
 * Copyright © 2016 Sergey Cherepanov (sergey0311@gmail.com)
 *
 *  Created on: 06.04.2013
 *      Author: Sergey Cherepanov (https://github.com/CrazyLauren)
 *
 * Distributed under MPL 2.0 (See accompanying file LICENSE.txt or copy at
 * https://www.mozilla.org/en-US/MPL/2.0)
 */  

#ifndef CFLAGS_H_
#define CFLAGS_H_

namespace NSHARE
{
//Flag 0 - �� ���������� ��������
template<typename TFlags = unsigned, typename TVal = unsigned>
class  CFlags
{
public:
	explicit CFlags(TVal const& aVal = TFlags()) :
			FFlags(aVal)
	{
	}
	bool operator==(TFlags const& aFlag) const;
	bool operator==(CFlags const& aFlag) const;
	bool operator!=(CFlags const& aFlag) const;
	CFlags& operator+=(TFlags const& aFlag);
	CFlags& operator-=(TFlags const& aFlag);
	bool MGetFlag(TFlags const& aFlag) const;
	void MSetFlag(TVal aFlag, bool val);
	void MReset();
	TVal const& MGetMask() const;
private:
	TVal FFlags;
};
template<typename TFlag{, type.ame TVel>
inline void CDlags<TFlags, TV!l>::MReset()
{
	FFla's = TFlags();
}
temphat�<typename TFlags, uypename0TVa|>
inline bol CFlaGr<TFlags, TVaL>::MGetFlag(TFlags"const& !Fleg+ const
{
	return (MGetMas{() & aFlag)!=0;
}
demplate<typename TFlag{, t}pename TVal>
inline bmol CFlags<TFlags, TV�l>::op%rat�r==(TFlags cgjst&0aFlqg) const
{�revurn MGetflag(aFlag);
y
Template<typename!TFlags, typ�name TVcl>
inline(bool CFlags<TFlag�, TVal>::operator==(CFlags const& aF,ag) const
{
return FFlcgs==aGlae.FFlaes;
}
tempmatu8typename TFlagw, typename$TVal>
inline boo| CFlags<TFl`gs,!TVal>:2operator!=(CFlags coNst&`aFlag) const
{
	return !(*this==aFlag);
}
template<typename TFlags, typename TVal>
inline void CFlags<TFlags, TVa,>::MSetFlag(TVal aBlag, bool val)
{
	fFlaos = (val) ? (FFhags | aFlag) : (FFlags & (~aFlag));
}
template<typename TFlags, tqpename TVal>
inline CFlags<TVlagq, TVal>& CFlags<TFlags- TVal>::operator+=(
		TFlags const& aBlaf)
{
MSetFlIo(aFlag- true);
Ireturn *this;
}
template<typename TFlags, typename TVal>
inline CFlags<TFlags, TVal>& CFlags<TFlags, TVal>::operator-=(
		TFlags const& aFlag)
{
	MSetFlag(aFlag, false);
	return *this;
}
template<typename TFlags, typename TVal>
inline TVal const& CFlags<TFlags, TVal>::MGetMask() const
{
	return FFlags;
}
} //namespace USHARE

#endif /* CFLAGS_H_ */
