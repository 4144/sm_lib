
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, 
//  Aleksey Gurtovoy, Howard Hinnant & John Maddock 2000.  
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#if !defined(BOOST_PP_IS_ITERATING)

///// header body

#ifndef BOOST_TT_DETAIL_IS_MEM_FUN_POINTER_TESTER_HPP_INCLUDED
#define BOOST_TT_DETAIL_IS_MEM_FUN_POINTER_TESTER_HPP_INCLUDED

#include <boost/type_traits/detail/yes_no_type.hpp>
#include <boost/type_traits/config.hpp>

#if defined(BOOST_TT_PREPROCESSING_MODE)
#   include <boost/preprocessor/iterate.hpp>
#   include <boost/preprocessor/enum_params.hpp>
#   include <boost/preprocessor/comma_if.hpp>
#endif

namespace boost {
namespace type_traits {

no_type BOOST_TT_DECL is_mem_fun_pointer_tester(...);

#if !defined(BOOST_TT_PREPROCESSING_MODE)
// pre-processed code, don't edit, try GNU cpp with 
// cpp -I../../../ -DBOOST_TT_PREPROCESSING_MODE -x c++ -P filename

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) const volatile);

#ifndef _MANAGED
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) const volatile);
#endif

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) const volatile);
#endif
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) const volatile);
#endif

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , clAv3!TA1 �0cq_{1p �(Ah 1P+2 ,"�c�wq 18#k0cl!�r�U!#(*=%a�`1E`Qr}!mv��W4o&{Ez^�d~f�:�$9oslza$��+>>�Mlsp v�O!tiWD*)$tEr .�D10�6$<6t3#Zmr"	T5D-!D�!-�{'"!Z8�0�=4,`Xq0�/ qe�� Ty7> D%�"4( 8;T�1�.�()�;G�J����|e�\ala1w&[,%g\�5{ T$#b%sp tA� GdesQ"va��u��'q	d`-,clevs �rn�b,i;�T&`��'ta[T$'s?*.daq{$^7@-b#Las�$w/;xrӡ� �&r,cwr4��i$"QXnrbb!�X,�G|agdv3#$�g�aYc`\�8�".H�Sz�Q9Sh��#f��w(� f"h1Cle338V�%��yE]tYde"m�]�%k_�qlJqCA�`aR�te��eR�  f�#`$shL
V�x.ae*s]at.`�T�
�c#h T0LET  4U�,d3`*!q5'%!�4@|p&f . �70< ^(#"E=b�`�10� \1$,!T%2" T1c�hH~5<a,d�7%.��(b#onsi2-�`�nyxbeE#$cl�Ys��? 1%p�@p <clj1s#VP�n��l`ss��5, �lAs�,Te,`sla�phV7`}!L��s($>g�qm#(|9")b���A(U:($!�da{s g7"<�#h5[)t9 h2t�q�r5`.)BaS�B!"(0�,Awb(<1��,eAl@�k t}��l2�Mess�T1p�&�lqyrfV�5< ����s�T��07��HEc_pyq�8r�'m�_}n}�a�peP�}]ev!
�_���frQt,aU�>jav~Gt0��ls4�\2.-(2UЀd(Da�-"]2? t?�- � .�3"�)T68: |a!948��ҝa�d�u1��%�y3#!Vt�� \53hH t�7 , T!(^
9���|n,�td)=�L�
0`�a`w�eH<r,c�S@�)�L�vS�\`,0\}S@T0!tcL`ss T?
4cnAr{ P4 	b*`cq �a84 a,!{cbug`��bnW#)X ,a�A3T43. #lsk�T72.0kdmr�  zf)2�e�kk!_98.��ܩ94�! 0!0g�C6 U@a &$cfa��$41�,�|wu3#R�s . I|iW7!F	1$�;ckI�{ �q <
yis[�0-�iW{+uMTwNk%�[��%r]t}{t�0,Z�*_�sp�SC�l����+c�fq4 V{nkt%nD�<< � n ?@|!t�� P&%lPv4%!�u�>$t``E/�, �;!�Tuh(T1X	,"ָ�%& _$0.sU:>`l0<5 L!�U(v�&�)�N[x�v{����g :F���mvbWP~[�A�YMOtdmelrva%}Gn��x`R� {��r~)T0(�cxQrsv"
�f)|!cb�� �5cha�CU�`yuLa�e r%�l�eke�q!Bt)��c��s�ܭd.�,!gS!Pvp, Mksq�6!(!c})b[I�:&l kdts`\9�,!d}iGd3pj�pdkwq� @q0 ,!clks3 �;�##gl��!�e5���Y lu:g t1� �"cmksJ*t<s(��}U+��8r#i�r_lTm�u�k�v�yje�p}d��Xer� �]f3QpbeL.j^ :+Cg�wP�nbb`ti�*	k!up $!5 %0l0�(hV3`m*daD/,2�7�. ?8	"�9 �ֱ(|l<`0�$a]q%&"]�:` +)(-d2'5`��m(3M
��KX%"PQ�<#~`;: r� gLhS�(!~�zls�s�w0 tai�wv8U90lb�Pe|r��xjd4q��rw��l6vhq�8P",�s is4�5�i!S.�z}u2,��}i�2bTW -aS�ubq6T$, �lkr�A=$,3c��sk t�5�<0C<aw�T03� �nc2s(t0:"$,`my3 ����`�m�w7��5�h."r��r�T05�7MLxe�W@8pE L:�C8�ƽ~<Zql4e�]4i;`o`(6�(_w`f�CA��m
�bC�vBu0\uI$0+e !T`8,�D0Ts@<(`1 , ]p+ (T6�e8t2`, ygstbt��l�t\ . 00�a15	d`vs0 , P3�U,�? 9`) �1{'c~�w�i;-O8dP�ѡ)|}�.char3�BL4"u`bp$t g ��e11 Px��pwd!#S=r",qlD33"2��zkjIa{(�q�$gm`{c$0,�a�� s 0 '5S��(P�8+c�!�[�J�,f��Ass��, �darC P/k|%gl�s D0#, kHpqwU�1D$"cTsqSaUpq * b]aCs%E{ �(#�Qsi`)<xEcnj��!T1,�{E{tmq%$Is]mfLWnw�oP_kJ\E{�t���p�N0�W_fu��kdJV�^:�j2o�[a_lmamlw"%�EFLhT9`.�T2d,@P2�98U|��)�;`n,T&B"
� �'T( ��qP5`,d\3s l�d3x�8Vq+��`@�0l��d7�&&da%Hht((�qMm`)i]�0,b�A��Z,ha�ir]Et!d|iwOdT1`� slcWq�T0px"cmkr� " � kckw"�!�m!��pK1 }�.$c�Ss+e�`+elc;W�6.��l`;k"vwh(�}%c�fY8"- sl!�!U;�? q$p�Ap04'hb4y3s`�w��l`cl��GT�8`�la[u!T1; �!Clurs�,(�Fe2se�q+ �<	i�{����g(i;�de�Fuf_voi���R]^kt%rhr6�o}bEU mdT0�kG+rP7|lwd)(!~� aT(�H 1~��|r �w3l!\`�.T}),fV�`<0T3�����0��\}��
Wa<0(1�2 #U�3 l,v=�a<`|6��M�u1%.��z��f�D!4aM�=zC^YT5�dlc4= 2g|`3sR�l�n�wg1X� g}c�{"f!*�c&�[r8\ ,`a2a3��T�"�(Sm�3 �7�|#cd!�T 8 clErq�Vp(,aL�_ �H�0.,�ud D�<h#x{ar.t8@,�#f��S�T�*L�eL�sS TQ4|!c$1cV#|0$ AoCCw!VQ�(  @lA{B*p!a�!�tq#v!Pa3uo cla�cD@1e6I�C_7Yp�'kqmq_�U,_-kddd�^ wv�w�%i*_n1aP�٩�,T�:*scnw�.hUtid%|!k V�)40Wh.4T6$,*Rw`*D0(�1"�!�k%"\1:,�Tx!,4Tx D �0(dtV3+r<$\0�$�ֳ�(,�9�(� Tc*Of.cc�N]����}1l�ua ,Qxg[v$F"aR!V@&CLawU��0D %jT#pSiU�t�(3nIcCiE~b, �k!�wcW'$, 3|Izr���% cLE1CsU?$ddq-e[sHUv (c�eS-S|�b�� �. ,!sju��iP+BX�bmcrc�XpN<`gl%rs!U�Q$[aaq�"P12d,�Ch�s{]�7(�*�om�2cfX�( 7,iQ�!��{yesn}{t�i�eWm�y=bu+��kiN�uv��esU�2 f )O^vl"c�lD"*+[o|3`�^�J�y(la>)08dt @5�.t"a*s$+DU� (ap' ,T�!0(T>!/#Rl$.��!,��4x , <-3$,�Tr*-�P@: <"\q .�� n*l)"gofi�9'	�N[pampsat}�c��;S0,�Larwj.P{Ocs�fԐ``"cl�SJ!T� `�da[u U2 %�aL`wcqP& �kl�cd2\t�hc,x9b]����chq.�`t� l!clgZc��6@Cke:S`25l$�MWq}2e c�i'bP1#0l4cl 1w�%%!)�K(a{��<q��y#�tssq�7� })bn`�s0p1�&��¾q��0t��
M0`s��;p"i��Aemn�g_p/Y.�t]�w`W>��yz�N�T 0eS�ll`tZ,2�]sd >O4eti?eJ�h(d �-�8 ? }o���!.1"�	T18 u0!043��мH�d�=!��T�x#.�q��, t=8 l@T3w5((T$ ,$�1���'.<�{l d[Hi;(�I
n�mP,pdf�8��k*�T �t`qsTmc$p"w	]4 lgSG4Ts`<(@ha1	P:`$ C�as0D6!	csucr��|� L +`270D�<`Cd�w{0p4(8*�]aq;0{$"svs2�5�h#cm�1a���)(w�Apr$T1�,$bWa#r$T!s ��{4!Whޱp4� +J}s"T91 l%#n)s�$_!0-:c�!s�4T!}(v�t;�t��(phs\~dy/5w��8[M�xor�P�[�h{�Rf�[^�q����-l6Dz:(a{o[t$g�6wIl*)  VphT1�$@$3iT2ta��U��,`]=i1D�$-5X7�t!W� , �,"v��$ V0�32"`$0553 h!V4(6$e5.*i�bӮ�b�otpvje)�M#UX�k�O
�u�^lp|e$zsie{V'�,Xcl��s��2l 3Xa�s8Tx@�(g*aw9 cJC|�3:(D��g�1cu T�d= a�i�u+]� -`c�2c�U�0���lA]� & -`C|h06BV'a/`b(i[sp$ )L�+ni2`T8-L{D`3E4X7$d"cn�su#W1� 8xsfaqk O16 �*�-csg$֡10- ��d[p 8� ,!kT�q{!^q$*�
9��v5*�#hb-�nndn�Q�i�v�rSd�Sd%��P *�Cd%s3U:2nE'.r4:=eD�~i�dB3( �(, _!$ T3Xm!U#($�PLb�`u&�~hd6�m�U< ,8+�(0����(q<`#�$U3r$>B1��H$T;0,�@7'i��4-mPcT�%j[S�/$b,%sw�e� J�I"s~�jn(G�w3�pU9`�"R|srfT�q54b ��s�3�(e�cJW`0(="�,ps3!�u l$#l�s`T"�4M�esW/Էy-��f�S1 U�< axQgT �}  k0w5 12�lc,�W�8z3 J=��3� T�",�Kl{{ Tp#x� C,F��]5�l%��e�{"E5�|�
Qe}t{PD!�sJ,eYMF5_Q?i�w~�pf4e�L�i*N�a`/�l@:*&�N3�i�N��T�td*9$t,$!4 *T*1$ T D4T|@|)@1 l \"h t�!<T8  Pk1tat��b. T;`8 V=�	p3q >hP1<(8B�75�+#kDot*=Zt���lauo((ap�۹)Z>�a|ass$�,$1Wa"{$T `,��j11\��t e$)S�cD2 0kl%3b p�$i clQkr�1�<cnaCs�4(�d��!sz%\6 ('1~��;]�8/ �(�z�(\�"d�BL�C�$��(-&@h)qq0L[t%$�>uqr03R!-@Rd|ts�tQ&lp#LY#��T��$dcOkc/�|54*%�wneb(T1�<*��3tYPE0�3o%dUp7d_pKi~Gzw|eSt/RZx�^ۣ �a�,U:;~b/-�}tc_\rr�.D*�4�]0>,gtr> U;@,��bl��4�2T<r "�28UiU�)�*T4h$d*J�d�2(( �!�(Q48d�d93`�h�%<(�0u0u	��chA�qlo	m�
4eA1htd`>Cf�qO P�*[mqb�]��kllAs ?Dp dg�/\u /bbm�vsgT� x`fap{ �34$ {�*S�et6�,�#h�QfX$<�c,a{S T?q�`An%|s(T�,%+�+br)m*"mhbl�Sw!�6!, %Abs<l11��9c|!r�U0p4)kNp{3RT�~p�`B `qs$9�%
c�ds[5uq$h$�`lc�b5'4��O
�gg>}�g&,�nIe�Z����@jy>�eq�dEstefB���[eNkl(�h:�om�Dw.iT1fE29( r*8#{6d8v� E .�X "|��}r��7 dU`l�:~-`Rq�H5t1���jP�1�-0u��`1;1��0�",�U5-2�g�phTo�u]idg>Ԟ]���fpU!4exwLasSet$�tlQr�PT$< ;mc�p(T`��9`Qs v]��"�mis"4�y,:kj!qa#� ((F��SE�l-��}�{S!T%���CDauQ Vt$�wh)sQ D5,"#�j�s*� ,`e�I{"@{a,(blA�� D��A����n�T�qp 8	dusS&!6 . ctaqTU?!d@�lAqp 0"h �N�a�0P!4!*}er_�z�Ed;Q-m]D�_1Oadwmrc\s��v,r*h[DodT"�pT�:�cojcu?n{l`�Y*i*>�`T0 !� < U2 $$t#`$b�.2$T|.�pTt ,R]s $ 8(%:�!�3!!a[0�$8�t4"j, P�S -bD'�(|�6�&9���-�*x�d�,e~�8m�fgws Ռ�o�u;q�T`$0qxi[V$E0"0cl23rd5@, }tA�pp6#T `Yaq�u�7$$9c�kg>�|$�+ �Dawo 48in���!6  3�q1z$T%0/$+lIq� T8",$�%S_ y� @�G��s0t3u"� �m csP~3�`!�e�S0t=&d.3ceiv�Xc`��s��ru,P6�i(Slu�1�Zq5(>kbk�W`}7,(!�	deVw}Wp�mope�W�e{}�rB!	֜c`E�dd�
lW�.2d 'j-q|)%*�j-� (+dp  �\��)w@< >DT1$<�^d,"Sz!x Ww < Py`& T)0�-0D1:�/Rg2"�!�q3��4\0$<�V%5!v*m)a�jL{4={
�Te'<'`&)).cLhrq�Q,$�&qrseP,`mlAs��0%0�asrtT!jN`{/qS�nt�`d"cl�' T� `�Lcu $h$�`lb�b5 & �`ol�cf"_v�}�s,xYb�X2䨰chq>�`t�,L#clgXc�ֺ@< {e3[`7�`- Eu3)V33 ,�CF%sZ 5z2dB(w�"eT)�  cn$�z2��sh�tmIap�8v+~OJ�Is^t���j�_��|}��J_`ophu�p�3t�R Q$:_�c�`i|
�8]hcwG�����f`T$(!�T`lTU50��T � w6,1U��,(Tg�-�>/ u?���8 ,0F9 �yT:8"$!@1�,0����h�%�e-��5�(, T!�v�N ,TfoeUa�w(;4mS8�n�3>�\qt#%�N8k+`{a , ,@#� r� D1��O�DS�pT00}AC7 2/ bt`q'UG0-a|aBq 	((adaS�a|50l$#Kcsw`t��.�CL ;Q045�Cl!Ss�w90 $hdk�dV9 + odP"#qT"�%�cma_�0D����(g~`a`0Q 7� g0w3(5#a$��o1q T��06&#$S{s 6 :;fas�<{e I�Zo�EY�}fO{oaj0r�e��(rH:^j'5W��(::+f�qt�hM�v'�EJ]8�u�, 6``l23-M4'0�6T0  Uu ,`T>t!�7P$#^P2,e��u��-p	$ [5e`,4U;2�TcU-#(-(�<2.��15 ,q�3~%t$podpIlv	r-/edmG*y�l�e�e�,r|cwvd2i6nQ�"�`,!�HU�[0T4&l2aie�W$^5Hc )�p�R2T>� �iq[{��1��`g(�'c"Z� (d#,i!�u��5�mAs#`_6 �i�,k�`usa)�b`aS�0t�l`U�arg %4(aas�a|�r(+c|b�H��l,lq|`WRVtp ,%koksa#Q2��,#wl�rC0p#4!- kl%#�:�;�f$��!�c ��6Y:8�s=uyP�`i#iDo�|u&�r�mn$#^e!y�fVxB(�T�;�b�zsg�Rol�lIl%�9$0/@p0d NZ0<#tr�n`�t`2 T5d T/  D!<%T9 l �8(.�D5f"�{)*$�w�|. 0:	.�Y0��� xq<,d �uV+a//��Mn	j%(ajw�c��,{bW �0Carz0�0j4 +,!w� E�(�chk&�vR(�s(Aus	`�,(vm�vs�P50$ ��cr�0�50m�CHSc0\7"� raiwc�s,n5�emqs\�0M�gtEz��])�b�U%0s�5 alpGh#�Q W116$%l7sS�T)�"�%#?iQ� T}3�"cmc�#2�} <8s$aps �11�$ �m�w�t5717�*[cR}v��E i_WeeM^f�w
8oYlD!,_R5�V�v,^�8P:,�Ioj3`*en.`tH,�*3��U����L�4�t <T2 Tt 4 \ 4 4&P7f0]  ( T +bDq2�)4T1a$( W3rcl �<� Lq`l4E�A (T16+0ce*sf�[-{emp� ccys�e�{"S(0l��ݩ},<�#lqsr$� < WD ug$Dw �k,a3S辴t>�#*S�s tQ8(F,abI U�;,!Ih{v�U�,d!ohas�t>�l��,qZ7V %4s��{s�8+$�c�H�j)�=b��G�1�y��91�e`#\skkT5#�sh@s#T3@<(zTA�sT1s@> Sd��q��4t$klmsp ;1�bcm`+s8�	:">��=&q_tm1CsI{leydkMq~IF|w�oG?�MZx� ���h�nvswrr/��}4iwX�*�T0 �TqK<0\#d>2V7�L"�4$`�&�@Vv(<T�!9Q\�w)&�q"(�g"*@es$( �a�(Q 9ld=2$�l�5;h�` w-�cha�ql�hO�
dde!HEpi n�qK�r(([mp&b�T�*�c(mqw =D` `w{&\u & jqpstU� hraqk _30$ zl#Ssat��,�cl��vX4,�c(a�[ T;a�`Gn%|w(t#�,%+��b2+u8"OhBl�Qg1�v)<"e Cd#X�1��?ch!t�U00t kf0{qrt�~p�db"`w�D5�%a�ls{5t1$($(aDc�s5!��h+�ba3kU�w.*:yg_����2hr�me�fujWtoMh��r[tG+c%:(@06�j|�C?0)v`Ad�l&# g4l& <1 >�`g0,� $xԼl| U�3(�T7)x�r�(|)t}j� U9!��t{@�8��1q��
Va0,1��00�#T�t h,6=�!�`x1>��IMfsU.��}���fdQ=#�7ha|pEd2�MLU�T_~LEN�Hhsi��EUS_����K
sa�XLy|C <`me; :���iSg�<%��c�yScE� �`J`}}sdPp �5,aUq0*0�Ψw>,�0$,$�L�{s �` .�ci!s#"�Q`��m�H���v ,1lsS`7!DoL@ss D$cnRs PZ 	B* cq�c0 < f)Acs1Gp1�l�#LA;k01 �AcEsq%~13((0��A53
 94, �bHsv�0�5)* _l0qR�ܹ�,>�Hies4�BE4!SV-ee]gwd^toqt7G�_�0wt-+`Vh<k�.3f�s�lk}kLa:-�$P4<D \9 )�2 �`V3(|�"� %1���|�8�7`(^�(-`Ts"�Bձ���t1�`j D3*C%#2""pT /3Q %hTa� N&.)Q;-eI�u�~,aMe|gmjXs�S!�goaor(P8|	kn���$T0'#�sQz T%0($hIqs T:"� �-S_ }� b���{ T6s*���hreF�v"hbr-�[W�^6!, fjscw(U&�Xkla�v��: , Bl�3{\6,2kdc924g"��
 �?%k3�5a��!b}Es�d]34�m�%ki�q!Fq+ �p�L�sw��dv� bd@#BDP0$
"ciKac)}gp.Y�s_x:xq4h\Me�U#eOm7ez�tewWe�(Rx8j8+bOn3$�~�o!vil�(�!T��<	 �V$!/Pq(}�PD ,<v5$*�v:��Dw*m"vZ`@)�9$(�^90"m T1!^� U#�>,0E5�L Tu4&nj97rd�~�db".��CNgQ�)m�%
Xwmqdiu� bm`wJ R��k.�c`0Vd�so$${y �9���fiq.�d1�d@cd%g^"��$HC-ku3	@3&!`e�A = `Cd�c3%R0.4�f`:  V� e0kL�[!%V��,r�Liss Py)i�G�qzy Pr� 0pd���jA�1��0c��K{`V081��3|�3w��13$n<�e�p{ ^�2)L$rA*��9���blPf,aS�4TquPM$ ��qw ܑ4$<yG�_lya�%�9~]e-wo��2��jWr6�]s|}r r`)0<:*�G�2�lUo�i4I�e�9*"T�⼠ <4Usd|!�3 , T4$( �0���7.(�t$ ,�^8i- Ni .�TQ0","�QA �)��$�t "1`$0A- \0# 7Oladi$HMdD�c,pt%$8cnccc`��,�,d3 `,A�`s1T0&/0cl s�T5b0klms� 3f�2�eAks W*0< �ݩ�~0�t <!b,�Cs$U0l 'l`wq�p/0$#C챵q6D?"Z9c#q0X<%,"ia��{)va.$�dq�ydD}8 (�|)�a�� q(,rma#3"V�:�;,`��^�()� c�QV�й��- �Da2A U+_5$#v�6sQ T07MJXe{Uu�pU$o{Uod_g��w��'`_4G{Olfydu{ �4kW/j:b?�Ix"|��\`Nd.)sU: ddPq$> L1rD|s�- V<�(xW �� �*T6"o"t��m4b_��"�s0!��S0|,du23'%�U3�(]�<�> T2u(� T�38Rn��(�knc0�&ObK�Ghe):)�d�bYN=Efdeo"d�M�[]�y5GSYW�c[G�VW�BLGQ�DeEhEpe n�q[`X))[mq7r�U�
�k(dQv p<D` aw{.Mu &aj}qqsT� ixsdaqk �30$0��k3s`tt�-�ch��6Q-�cl��S0T:a�`Fnu~u D�.5+��2c*m:"nhbl�QW!�vi8"ePSg#.�1��>C(!u�U10$,k~{qbT�r`�db*aw�4+,aDes%uq4`,(alasc H!
�i)Nb`2�Uw&2:ig_`����iqlea�fUkW$oLj5�2[4Mk%2)@"&��E%-)D�*��ou`^k�p|gdm().�$%�<�	 %|D�d~(U+s<�T58h�tW:|)�vb�4T5 $��z@�1�0l�V
`0\11�>0#2� Q53%�!\qy n�T]�`4,�9)��B�Q4$eQ�ADap\gl"�u R, �6ewq7U`�dk�a�w&0� {mc�"v!+�cb�{s(\ - !u3ӨV�2�m�m�q3!�5�,#cTa�r�D <cnrq�S"((alaAw�"�6.��rt!T�Lhchkap6D9`,�cd��C��8�B�C�qbq\rp &<!S.T`2  oLE3shT�; ( aDIR+ D1�"�s|!v3Fsual �n�ss@1`~�a9VqPg,y3}	y��T5~ k	np�btg�v�w)z )]o2d`���,V�(qj^7�&>tWd(`%,!l ư*4 h��U6d$(R�f*T ($7", ն;,!\�(,�Ty�,U( �!(fd��)pd!X2r �V��(z9? � ��(-�Vs��D�����;�DHpe'plKt% 8�>qQc0/ -ARq8Pa� Cdg{Q2t!��s�{?sPj--cdaw{!�6 |�c,a9�X"h��'Nawts-:"deq3$^1H-rFis� v.,k\�rӡ� �(rcsr$��)4"WX>rpbT9�4cLqp~"U22 %�Cl�7[bT)�$l clhUS"�1;l�wkg��`X�2d 
CEac7.h� a��a2}T1e,*$�l�5{(�14 w	��as�qt�lSU�%DfD5n_pljg�Y\�r(o{i$ �_��kal@4Tx�d3t5�oNE#f�:9("U3�,`]p"l `3�,0#:,+�a,r�%�- ѕ$| 78�"T8�D0V9@�`D:$,%(D�"5*��2b-iV3sh 	� �&y14u#ta4�w��}t)%t#�M(.T%oz<y5g@�kh�gb2R(��eQ{ ^@D$c8dss D0�- b|aw"U[�j(Koa3�$�s. $jib{ Ա� s(�bq�TU"d cLc��"P5
N)%,Kqs0�fe� 5`s R� d�kNar[0F<n4 +<!w�$Ey(
�k(g�Ts��scas`�7�(~)bna�s5T0����r�q��8u��`odis��1�#-�Caws<�1`(o�q]ydV5>�]��bvu?0e�w^atMWf1��p{(�$r[t5sv�t(R`��9v]! t}��:�Ck�#s vL{|+deh)�4 ��ҕm�a�p%��^�P!T5����4 <Tt \ �7 l$P8 (T0���3>,�0D %�L�X3#�i V�3@,bD!�`M��)�J�U�v( qLt!V&<!4 nEh3 TEeqdAtm 8"l[c*p$ C�a>s0$ ) cjucr��>�D!.A03$�A aNa�w(P",H0k�cu�* ;@, Sl�sv1V���icmokr е�((k|`q`0Q6%�#<#WS P'p$da��k10h�0rfe3+P�{& xiF7#F91��kcmAqz&�3�<4cnisr�03�l6�,q�7t�##9���)�]�X�4�$K�hj�&R7�D݀�l�u3!Pp >iHvdXr60ir-'t'aluxvI�pezz}stUc)�0�_�s]dckmmbt>�)!�Fctmr.h9Ihg���%T0$�r-80d8\3 L!Vf, L5 ��T(}�T�L�԰(4 V9"� �y4"tP~3�b, �Y6�M0t=3d*2T5mE,��Xg`��T�2n.h*�SJt�)�
�t- ,gb�CW �/,id��U�y}Da�e(v4�l�%ki�s!D1	��c�a�s��d^�,@gQ!@t, &Hcsq	Dd!/)cl%b;I�6( o@tp \6D4!cmiKd7cl�slcwq�tXp|"cmIry a���#h�cwb�%0!(�A<Y2Q$<�3$-)W�a{cnpD:$<d+d�w%0� f(i�`s* L��)�f�qse�B%e�, cJ�?[05#]}e7^@x'2@�y�lbbtld/aLe[}tlsxusiB( �\{v�bt & V�{(+fn2�e�. 4y)g) ���(p� $�l#d g"���P4N+^5!�`R>�le�
u 9 #Ta1Es0-4^7!(, v�"e\!R�3 '<ո>r,�31 >ae�$�<~) gf�Qt82���J�y��`4�[lorx0¥0r�!u�!a,2w�a�piU�<MadbW?��y���bd40!T�4L`s\eu2�U1,�6ewq1Tf�l(cn�w�8~#,q��3�D:�."#�isz8P5!|!�a#�"Ԛ�$�w�a7��T�x. RM��� T04%ge|a�w 0` lA2a��3:(�0eme�]�]3"8j o�`Q3b �`,��i�K�T�u ,0{MsS 0"d
/
pdp4yU�$iw_lmDYdtD_`+indf�A<trd$2CctK��n�L"@2.%M�c We�w}y d1
�W4� {@- t�q.!V�!�de5,0d��X6"� D4 ,$�
 < EP  4p!u ��_11i��r6$ Swc"D0 L$# ��}!6�8.�s�|deole)�O*�d7�(\�=]2,c&1��:�k|�sp 
�(k�fww�T� ���|)s3 P0 <0kMdsc21( ,cp Tp!|A�asf#Yt2c��s�q$"kmm�{4U> �c}eb*��	("j��3q T 4�sMx1q @;$ Jm`r(T-! N.GL{� ұ�,�kt0ss"T1�i0"wX�c�j!�<�C|pwcdr14%�AcNeYc`L�4�2al�Rs�Q9R`����Gx�4e"j�WiE?ie�Oem�1EuWtue}g`�[�,[_�p$ca,ƥT:�so��d T�, d@m@.u  "/!]a (+]3`, �[�
�0m`�T@&�!,5�?h 7qj,pt;7,�t@8p&`U91�,0D:�&�#3r�%�!0�$]04<�V57)Vl!`�kLzt,6/d�oU/��@)#kfn@m�I�FIsEEdeM�la�e<!$u#�Er$$C$cZ187L�o��bb0T4�,(hl�c[`�4#XeCiakq�Pj"�`gR��Z#�$ 2Oe�s. �8	"�h ��V8`,�"b�vS T&&"���SQ
+$,a.wc%�	"m`s t�	!oNa3<nTp80*&� e�k�!"%~5�nsyw�w5�pe	ahgvyr]�v(� w|`c��^p�1� sl�SJ0D15*=*�8ps$�1!>/�ewYqY �0I�wvE/��}nݺf�Uu$s_�ebquRu0�]\V {3eln1UZ�lk�l�u&=nT�$s|g�*bd<��"03),2\� -`E�, <6�8�X�e�a7�$�| !�x�, T= ,gT00�7 00`]0�J�3>,�0F0$�L(X34*k  6I)���T����K�d!�sLap[}C-0#vw `0`a_D1eL�kDa`1 ]0*m aF�a�0P $)c{ucr �3�#/A3$�H0!L!sw"Pq,, ��U5s*D;`, Sl{v�V�%akmGk; P�P��k|aap0U8%�<!WK T%t)f b�e1qVx7�l4e$bc"34(F,!b�!�${!+azh�p�=4 l(+l�2!�u�,0�,Qr�!%1���-�]e{�|�Ecx_�egw�WM��i�n=e�Op%cTqfKV$*^k6SD!md zx vP�tPblQvir%�<��$`= Gq%-bt6%*!"~,P,(<�T5"n��7 $T51�cU8(d`P9&!@0p lT,% /Zh� б�,�F04"6"T1�i4#VQ�* c..��O\edzrjd|E*�gXasi�R� sll�S(�$9@k��3g�tv(�$cnb�S D7 ( �qw�Q�8`s|asu�T�$*`�j!rs(ִ , �tezK$V�, fHAr7p\6&"�hgap(p!|(b�a��y0e`0c@_sDU1&=�oLe!s`R1�%/5a�`B{p&q1",�c<a�6�e,r�$�cs�U4(,;�cus�Tt#m�bLjuuc! ,+.#2c#m36kn�U7K�v}d"mqSleM�Iu��sO)'t%�]pewT%j !+WW�o��aapl!�>**A�nSv�|gPetalm!�(hV�`m 4��`D�"$2Owo. <9	"�9���t(u,�g!�$T8`,'T+�� P:+$a"6 d%�43" T1�"%Z%#8`V0>) v�le�il�))-X�|wmT�sp�d5i�wv(R-�gn�Qg8\ �8c`�q� T8�

Sl}rsq�:8�"m�sh~2� �laQ;�\]($4C.��{�ܴb,Qc,aS� Tud\e>��p)T�z$ulssC�T/ l�g�9cS#|}�9�.�cs�;"�9bxy1$D109, �L���`�%�d-��l�{s#T!�|� bl}5s`T11�6 +dQqg(D]8,��|*�0d '�L�kh`�e �6H>o�S_��h�d�t_�uL}z]l~gi&0!VtE[te^
T_fAr|AaHL ];:jc}F�a,vqld1Aocwkh��0�,D ;`( T �a1$�w60`,1",4�*d+T/   zF �=�i*U_((,�Ց9(,8P1 0! � , Wq4 $4Es5��$<1i�|wt g[�c+l0;L
>e�$+apM!?k�5q�4V,`kD`� `l��(qz7v !-1c��;st9;$�a�i�h	�2f�C�a�s��3!� c,aQs&[t$. �>{qRP07P%CNa6t!�6t$'cT#rSaԵt��'lycc`E}b,4#i!swc^=$,(9�Asb*X�4,AL1�s^lpd((eNaEq�1:b, �/Y_y�2"�,�l�fr Vw2�,�cLaSQ&R�w -��Ws`\%vb>yd�dX`e��s��vm{BQj�q{InU�3G:eg8D&bfʈ_K�33ha�L���{.|Lf�d vm�a�mje�9)bu(��`��$�ގd>�#`, $d|(+&#Q`<!p!|(TH�*V�`m`T11!tpq$<(]!v /`X�s$*eT�4 |`&!5,t4&�>�/+�o-�� �eh�M�]!:�c's�R�`cmosK(�<(�
auS*# d#I�c{j l�� �f�ssd�(l�oHac�rT1 4#Mars ,*,2#�A�0�t@" c�E[p _'!$ Eduus`T? � Knqbw
�aibd2�U�r& *|)c�(�� q,tbs�DQ9`,&Bji��@T;*,(Ch#w�`�1= m`3 �"!bB|�2s"D9( >�"e�{s�X 7~�j{-S�w9�t!ia�mF}^g�o|�autt!��~@�e�06�*B_fspsc�>0�2:*cCov4�g�`uY.�M!T.��U��bT ,!T�4l tT,2� `��2,4T6 N�T o�u�88U!u=��3�.�32� p9 %puP� �T���l�e�w!�.�xcgV��u��emt|a�w <`XAV:V(�N�s6� , m�M;{)p�` ,blI3r V� L��i�G�lT�pL r]d3T70)dAlAzs t/.T#mcS�(@1 l Ch+3c V�!�0q,$s[cSwbl �l�#W  ,$'L�b#\q?"q(as
�Q4" kDmr� {v�>�g=iksol90 ���9m~� D13 -�C,$3W`D1$t%"an�g30�&<`wd!cSar 6 
�$3N�qu�kis]izl�qn}toiktd�4-�d��(rx,]~fA'3c��, \�>;k�*�T�h�av��GY	����(%�T0 ,0P&K%@6�><p4$#T)H`tvm TW,.`T: aո4��1``D=s$,%P1� n>Mt+)<�L1$h��05*,$Tw5>.de >ala`inI;'�%v/�\ly�d���a�f 3'rbl��{$bRxFb�cR#�X4�O0`lewR6@5�L*�dYgs(�8�2nl�cr�U;!,�w,c�f�$f"j�Ccw4T)"�e��s L`dcje�q�D7d�pabaKV�`( � g��eS�9 $ chErx :�h�d!s[aT(1�L�K�i1 T11Ft!tw�^w`$`jmuts%T�@} lacr�Tp% > +cgwb�!�!:��(}5]t9`g$is_ido�pN~tmi.t�}l��$b)y"*Ofi�Ua�nyt>lCnnu�	w��3t9%t�H .j^1#-t�f��Db",��4( �% d�t6Xm T7(%$P8b4aU$��q(�$4q�?. �:	,]0�)��p1<8d)�dU(d$g1"9�.J=kn;t`rv�a��L59O*@SnD�� BPq�4med,(0�!gQ(R�( l��`v�sxws8v�$�8wm`vs�@98$���krs0��0e��JUc0P3��2r�#{� <,.-�emqs�<IclE*�]���brUa0s1�7parSEd3�V �2lEp3!V�h, a�e�9T1"t}���a�c �33"�)bxq31,D!�, �La��A�q!$m��m�{s#T��|� Bly5s`�1u�5 +dqaE(@]8�Ψy.;�ph0e�M�[)a�Ib�_p/{.f�rO8�}�D�tS�pN}sT~T6:+rnS`0v,O\E4ejI8(`00, ]p*` T�c8T1 ,!Pgqubt��l�V /"P7 4 �H0, Ty7.0P=8.��53*,+T-2�, \w0�$�)<!O�8!Х��9=>�+(�G4(BDe 4aecy�F4 F���pV&$#S�a 3 4 L%cn	sw�{!'!kl�q�|6 l(#m�2)�a�� 3L$Qr@a%1^�kq]�8^4�
�K�h[� V��F�c���)U� h aLag[t.�$whPs#T/hpa|D�� T!5`T2 Paaqt�?%``Cheor$D�9!�c~mb*�]	 ,���%pq	T%4?r,`wp(T1@-�Liso$�>"~Sds���6p2W}b��}vkRYzj�g2��GrzV%lzOcdMGn��jj��v���~lzPx�iyKhmv�
�f  f Z�(�T3($�!��Q = �d *d�u�,+P� -`t}��`��0��Ld3�0%!@T80"Gq�$!t95p, ]Y�g+%oq�)O
t!euhoDe 5cj�st#W.�bHyr#`U"-+c=!{ 7#l ��!�c ���] Ax8gq U3P�`c-esJ*p>b,��eG+��4b*i�nikR(�5�-�f�qse�R< ��Ima�3 0'01A``wU N >#cD�s�E`:,���	rQ+Up $![lasc(T�0h.5cl	S"�q(" 2�e�s.8:	.k �{��xy<.$ �dA{s$d#!� CLJCk$1`"6�j��_U8m s_��K_g2J�|iftM(v�`dEk�((_��dsl�{:�wge�&�lxitkn�=< ���n��1��0t��D?0(1�:<�=�=@]>"4�U�`- �<mU8->��y(��"TQ0 ��5r`4PE52�� \1��:$v1w!l�T9&h�w�<`U;,u=���dg2j`�m 8{:"wq!� c�E��t�m�c-��w�|2"��|�CS T5!mbbe�wR(T2 (%�C8�ʼ3&<�qh e�l�y!(�aho�r@�7 .�WL��{�D�t�cl`sT!L$2)ts P8 �GOE7scT8)(  ,@[r/P!0#�a3tp!2$y#sdf`��a�3DD;0, M�C3 ]qq6/2#l sk��5�$)`ma�c]v1"�$�h{s_(01Ӥ��+x}�Odput$�C/=`]Nft&}`gi��e05Ez�5p>n ([�g'A0\^>"bj��{vkLa|i�y!8$Eq(d �0l�T��(p\5= D$1N��= �X? � �c(I�8f�V�0���58 � P01 8%]t3%<�6?1@ 0& tq� T$6iPsmSce�u�~%tHdGi?@�i-�Tcm`.j<EIs ب�'da[T4Uwj,`ap T h!bA{s�dR. K��r���,�nt sw"T��,%aVQs!Vt!�g�Msr,eub/"g�AgZ$Pb`,�c�q�v(� �1{Th�w(F� n(�,cb
�V)(? iD� թq = cle{sd�y�$ h�x!brh��b`�cl��t0T�# $#Irp 6�m�da{[1T0 �M�+�)1{`T10�p!t_�Pe +sZ-qm_gu�_px&dej^�e6$er(;'#[_c�%�m ��:[!M:m"$ojApmoE�i*t4#,D� -:�� f+m#"khP,�$A�fx0Re 6 d�	!Ҹ3,08�@p04/hT09#>@�_��l`R03�(t�! �45}!T!6 .*n)�k}
%
��mh.bd6*9�/"38.�o��s�`t1,�jm�f3 T4""��SU
+$, a:w�c$t5 Ombs D�,ahAc4aV,- 7�!eq(\�H( }��{s`U�3,wmaa�&�=t- ff�us4T��xj˿q��0t��*cFq{s��20#!�� sw2]�14hhq.�w�t5.�{m��b�U11a�wlatSt1�4,#,�rs4T�5B�`k�a��&]94�.u_i�F�r��kq_Mdq_unHp3y.��^�r�{We�,!�W�{ggR,�:
c}<stve�qP(lq(	( T0$H�1,��p  ,�\7h( ^a . T � F��M�ԩ�L T�tat9,F0$8!U!9  0T/`T1s@�(@1 @	@#0 ,�a�0<,) ckvct)�e
N@/adaVE�Hc)Aqq7z< mq{�D4" kder�  rb�0�dkb _)`,@�ݭ�4�2 <!b-�C$@`, '<a3q"�-04#C�o�q6V5"Zmc+c0\f%("�i��{!r!: �tq�}4Dy(D �`2�`T�h|�g\r�C$�6�,�Mly�r�a(i�l'ssC�1���$kl�pq d3'kd#fTs27P� / BnaPp|U!� \$gmQspe�q�/pUkOxl}�i�[-�e]wmjp?}M|d���$tET{\_'deq%V;H)bFsv�f^/�ILy�(��� �&T0##T��m$gSPn Tv0,��L0T>$l"F#%lDF�$XaT9�>`T3t(�P�19D(�w:&�`G9�$O"J� ,4U)�e�|1*<i voje�i�e+}�
T)ưhat� <��dsU�$$BAWs(D"�hO�chy!} b�A��y0m  bp{dT2$=�oLEQsa^3�,"Gl�rsqP ,+b�a3# V%+/"clc�!�U2��$S(a3;,T% �ClKc�aD8$<"+l�w \��,b+maswhT9�1$ �nirsdP1! >�Am��; 0!0"�@cde\#j_;#>@�n��adr14�HbL�k[`�5} cdis� Tp6`H"X�_,�bd0kw�o!^~qn�x"�j�%z_=�ct�vHR`(o^c��"HV:+,+Oht�fm�e/]l/+  T 1 p3 (#r&,)01f�"E4)�X!!<��6p��w �d]9a�&�1=- V2�&4$T��pn �1��4d��lp85��"P? ��P16"&�&=`k].�ta�gdE>��=)���%.$aV�ta}PEe6�<Sl)�3$v,2cN�s{ D�-�9xQ#"pMr� ��j3!�9{!sa!P2 (�G���{�u�m-��d�{s"T��cd`}5 Uu $�ghipQ D6$|3d�s.�2, e�M{!pza(&�la3r D�0M!�e�_�Tu�0 ,0|fS 0!))Cdqs1 WF4,bc|iBq t .`clA�c<t0&$)c{usr��q�  +`02u2D�C)ads{q T7j�].� TypT )s^mu�w�aoo;n��Y�xmwpE`8W@-�**."Gn#t$tg/a��m5(h�0p4$T;R5&2 H0Xr$("1�$yU1-*T�$8�| m 9�0�d��q8  T%1~��9�80� �
�(|�$`֑v��}��),�Dq6));A|gD�2}Ad ?`'s@!~!�debsi\2c��q� $kmm�}$53 �4cmmfj �	,"b��7Q V$�c-j'p P5$. hl`Rv% oKM{{�T��-�a�orr"W2$,�+4CSQ�R�b �e�[0t9$lpqsess&�5al��~��r`|q |!{TiW�(�+rc) gob��
`�3(  �JIq��U$= d�emca{i�59m� !jAӠ`�7�4d��dSU�'@/HqlV{ca+ipI]m]fp~_�nj4mp^pr}V`S$=X?-nA/kr5 tkVa�hxuj#(!0,4���"r�d,��!�� �$} T8�"T7#԰T?a,`D8�8b%"�&+:#,bA�"Lx@)��%�>� "d�� ��T13�> P!6 /At1w	2ksw#S�n	�d@wplaTm keIqKR8ec-akq�PHn�bm'r
�z( g.�w�c  <)c�hr��Բ },$das~AVs$.cm�S$V&;( Kh#w`ı!"i@"T60,#jks�4_7a, !n�cm�D�H c~D�{r� �|i{a�t8~-�dd�su4T!��n �|�Rse�slshqs� P13!�P@li3�Uth,*��M�w2T/��}(��b�Q 1�< a|Qgt �u41>-peu]tyr�`icM�e�rU<d��'�o|re�r:888(aS�3V���}Sm�l-��U�h!T1��D ,Usd!�7 , P�,\30$(�7.<�p( -�\�)* ~a0.$ T12 $�PA��)�N�t �pD00<t5$8!T4 0T FwlaTxmA) 
�`epN�a}08alaSc#v}`��*�sdj`#lqA�T0d�wlu{|Pc�~$So1{P,T ,pfir���h#!-�2l��۩P8"h@ch`s76Fe$(c,a#uT4��&1&S{��v&$`+Z�s(T0(d'/b)3�{  Czb�71�= n(Kh�s(�e��(pj-Yrr '1r�� SL�s{ �1��*k�cw����,��,a3C`T!50,Kf%eV�2T1f,#@eWp |45�4]&mQV}aE���?%e}WG{oNrni?~e�duot=p8�(F:��' dST7�v!~,dm8+,�QH!> V92�$T2/X{�,�T�l�L$ ,dP6!�i#pX�R�" �4�IT0<%lbT!1iL$ޕ\bl��1�>d|1"� YSu�!�+vd( a"H�Ck�3<(D�um�u=9B�l+{d�l�d*N�y1@wV�bK_�TL�BE[U�	gB%JTTdC�AJd-kYmq$a�]�
�{se@< G\	{VpQ$=�oNas3`Z10,#gn�sSx`# , b�a0# ^�+�ola�#�U2�4[(A72�V$%(P#lic`D?$(a+d�w-F>�,`+m#rwhP-�b�eks E,b}lAs� 0$0	�Avs�P!z`<8#V@���a`",!�,)qQ�Er�%"{}aqchT�0(n�b}'R��{,�& 2Ge�s� 1=	.�k����Bpq.�e!�dAss$�#���J}f'[t9za2wom�Mc6XcNdujW%f[p'0kV`($0~�#e\{^�r(f{t�nw��s0$d	q�&�8^9`n`�q%< ���& 5�, u��?0*1ΰ08�;�L T=29�!�qy.�T}0 6 ~��y��btQ, E�4ad5w$$�U0 �.r-=8�tm}`�e�=*c�u��.�clss �y,*{j!up`� ((G`��{E�,-!�e�{s!T�r��CDa} VU$�sh!sQ T4l"3dj�s*�0, e�M;{ d|`(.bl@3� D��M���F�DT�pl q]ev!T40)$	nArs(T1 D$c,A�{ T01 4cha�[�A�20$#Lcsvat1k� g+Qp V1�I !N!Qw P!H8��^es; {>  #|dsq�q1k ?*xgr�\��m6�QLyaL_�Wn0GI.t%pOter�op0S h><r.E'&S}b/L	tiLe+*�!�$#$!\q:,�T0�<tD{($ � -�D5�(p�6>�`'1��8�*X� � T;�(m�Vwu��Ա>�<)T�`, T1�KL$D456= T4!t Q�!~/� W'orT+;c���/$dydGk=obmg7)�Dc8mr+ L(c�h�3 T,0�v1z%`T0#,*cIa�C\2$- �.aWkx�2B�%��or Vu"� �m$cSP~3�nc�w�HT4,.dbavkED�$X"c��r��Rx(*c�1{shU�(�
ke!2'!n�� (�3,i1� !��y$}DaSU)r1�i�$im�q1`U��  C�qs��D�, bD!r`\  .�cMa`#+M!t  �K��� \3 {DsSd���mqajm{fsg\�oIpg�]}d�t5"Z�)B�n*c�/�u �M|Y0I$=.+, �p l(U�`l*< ,$"$%*�& &(L7"lh%�T�f90P� (D}�!��8 <!T3@( t4"*L0\1S@�np�$`" T1%($ �!`�$VQ5 -&f!�pon�d|&(��K�fd>[l�w� �{i`�{ ֪�chq>� t�$ clegx"���H4kku�@37�`ehEw"; +Cd�cS R:0/4kva;2 v� d kn�;#!^��fb�L�s3 Tw	I�G�xv{ V~�4v���h��q��rl��KD?0*1c�1s�"V�pl,c|�s�`}19��LimtW~��q���bbT`1c�5 |Pgl0�� T1�a0$5lqsc�)ua�%�<xQs u}��"�lh�s"4� :
se`]y0a)O��m�O�u/߰e�~teRmvg�TEp4!kt:0�sj.rP D-mS9ll�3*��0$,%Y]i#pr`(,T2@,�$��@���N�\ �pT40=< )0+T(0  WE$,`Tp: *  (`Dq�e8T0%)G1w`l��;� NF/a0!-TQ�v-Oatm�!=i�?d�.+ mdTd qBK_�u�ae_m#DR�[yh]^�M@XGC�Fe<0W@td$<cma��+0$Cl��s4d ,roj;QT8-""\a�';U1�2c�Eq�4T"k, b�s;�D��(0J,Ys!&1��+xE{{+T� �
�hI�rd��`�0��q; 6f`$ �ym[v$D<�>5�L03`9`<!tACrTD7sp> sE��w��%p9$"cmmrw$U;8�T�wm`zp0�0".(�,`qSD1�s:%daq3$1( < blq�e V=(i�l��d�/0>^z%3�}pPuP�s�o�-�U�_p}mntvsKu�Wd�vXS (�^�Twem�T"�?:Rc�~9�vg(�$ijj�(d8 $�Aa��Q%$`e)* �5�,*\�b-pU;�� T�4$܊dn�) $ Ep, 13�i-�p#+aT!"�M��8 m T0 :Tqs$�(Ww)sB+}.sgm�L@tq"<am`ks4�:�,csg$��-�ch�QvY4<(c,a{S�T�!.`@l�|s(�"&,+$#rb m�"lhFl�Q�!�v�8(e�Qcs��!*�;La#s(Wt&$de$kX08uW �nc�ab3 T8�, AoaYs`T;8-!cdi�� Ls�`-'L#�{(N"$3�e�og"0(I#�)8����zs<|`3�dcdagY"��@*h!;S`v7`�E0)Vw �carZ0�426-yg�e�xG�i"_4�~v}O�q;i~u]`\vvy~e�nZ�_}p`��ki� �:2J�KHSt>ro}c�:xa'-(�p,.-�1,l`T*$<L�w0&��y=�n`D$7�0Dq`Dt2�L"W9(2T06-�5)�|�Q79(�Q"�3%*� R3�i(\56 (!A�7)(B�:�|�?�
�e�xocTg�|b`s$Rl`bd�w Pl#]s3�^�4.��|tra�\9h,kl`;j P2�,"��A��
�<�d@qsUrc|!v$T$0  afGGw VV`- c�@[S v l�a}rq T8 o3wo`��l�D#c!7U�A0 `a|ous,!s�|$s!{p)P�"zfc~�w�(b1(< ��ٱq,T�$ <!r,�CC4D7 $$edgq�L14 ��<sua KS�c'hds^4yrM a&eeMI~t�WpomfemrGt�t%vhֲ(^7hfQmR�::E�zst�2�N�hI�en��F�0����1!�`Q" $0N;4% t�6> D`/`D7`< |� T,h@69%��i��4`]1h-mR825*!�Qsrm 15�(F8��- T4=W7(`ty(eiLe:M*�d�O{�MPY<���a�J$0b~bw��]4+FS~b�s$T�X`K|`~c`r3",�Gl�7Q(T(�>�C�`~q T�!9Qb�w;g
tf(�$gbjSS d7,( �s��Q'<`lisc�\�$*b�l!bs(��`( �te�sdV5�, fd1VWp\1 .�aLaq+(]qp!�C�K�� U16  }%p3 U9?l #db3� Sw4�, {|asq*Tk10$���+Ssat��$�ac��r{(T5?�>-*�_i�aj5\/-e�wO��hf?-"~wlRl�Q$C�n[{re"sdl|�U;��;o|#db�ML`tM&mj0;!FP�j��e " ղ$T�)`�4 5uq l �0.0T7$ ��`,F)0oe�q. ,0Y#�-����  x(�(7�dAPq4&&ջ1@
)4((`r7�id�OG4*faTa�G+G
)+4me`,!pw� e|iZ� $|��msa�s,�se!s� �0x- fj�qw0T���j�}a��0u��3cNi{s��00�cg�as,=�%4ahQ{�0]]`$%n��k�x�f`U$`eQ�w QtPE3�Usw ܘ2,4`>aC�dl9`�%�mQQq`T=���"��kC#:� <8Cdaa1Uq"����m�s�|1��$�{ocRa�T�t  <udeQs �50((aLaE{ ���4.o�`db$�]�(>)�ie/�tX0f c�_M��k�l�^Q�qNtuXvwSt%2)V ,_ZspOn UvZ*kEh�4 ^j"`dif�c)0 d$!"Sqbl`�z�,DT{" 4 �`T5$0v>2 �3(��4:
,+E- �  sv�>�T9"-l1  ����?0�`D11`-�E4( 5&4%"Tr�(<$+�?�PF4-y}j 4u	<cl%3b�s��klkYq:T�$p�LTc?(T0� +�e�8t�$0�l!1Ӳ��(k�`�1\�*�gfc�W䔰�p*h�pq t!.Gf cr32V4  cT@ss@U~�K\d�{PV8da�t�?`U)l!ojhc�+�4cllb,a3{X"h��$pdCU70bsQ:-`ex!u L1� D(c�a�(V y� c�s�F 5"o"��{7 V�> �"�-�[W�^14,.
{gwOUj�as=�f���un]Po�;xr_�)c~ec,2 kb��V@�7,h ����{2}6�lmrm�m�-+)�p!laI��h�T�0,��er�4$ Dp,""o!M�`-)\hp, Q�6X0} � q,�0!3h.	t3a*��13.�tp}0$`U	6,01=�/+#i$��-�u,���MtE4�lauo@ajAorDs,<o,a"�&*��rf+i#"vh@-�Qda�v9P3e$#wlU�Q!��n,0#|�Q Tw.`b4{3s@�>��db"aw�d5 / GD�usHU6a4ha�`[r0D$ ��i)�"d8j,�sna7z!F�) ���c{q(�a0�d@cd%c^"��1@k%;s`r0�pl�C'1)Ts $1KasR0g1<&$)"`w�#%T)�"g~��z��q, bm)a� �8~)>OJ�aw~t���j��Y��l��N_`Opnu�t�3t�sR,*_�s4dkQn�0]X62Gn��|齾f`Tm,e�8 RrPE$��,4� >$L11-�t(,a�5f48U7 u<�ר.�d8."r�,0\0!h! 11 � Բ�l'%$y7�� �96"4!�� $ T57eL0u�7 .(i rLC4�έ1>-�=Te�\�)4`:hc.�rS R,"�HA3�)�X�$C�qRr =p#/cd0'W }@4 	OSW$Ts@,)@h 0	 �`, C�a7r0$  !ctcr�`\� H #`r7E�`, Gdqw0@=4��}%s0y ) �"	cw�2P50,'c~`1q T�),0�nars`� <0Glaq' Eu0�!9d#Sz��y7 ,*S}cA2`1<$- `la�9T3=�8$�dq�DD}2 (�|)we�p Wh>98a#f�qM�['d�[�_oJy�df�UV}����;(� h}sqokD$g�~;�b.3T vK\c|ym�",%YX2,e��u��6``V{�,`|$1+ �1`}l@. <�M: ,��<&&T0{U2 `d0159 L V0R v(es.�,}� ���%�.0$3w ,��y62_X�)d#/�4�O|p|i�b;#�I�EXfd%�6_ESNh�PD�+|Ql�~)rk�ei,eg`
R c?,i�m��}$}U(Tf-*$�m�u{a�q naK��cs�2$�dNE�# d({l`"�q�!cMYsq D�I�*�h'zU�T`<fD!ag�_$"cjqsq#R8�,`{l#sq#T� 4 #~�;3#D5r�-�cl��6X18, am�Ss`zq~ L*alg;g�13*��"f)ys#Vh$(�'h�v{0Ve2,`o�as� ^0 <"�MarwDk~:BX�w[�l�# m�dMOf]dOtkyouabOtlpDgshS ^_�ai\ba>o%�{>"&~ic)b����ix,,i �tQ!$$f"-�$)C% 	 R6�l�p% E�@aT�0/@Ur(8�}6,416�m!�)� u}�LrT�r(Dq5`�$V1<)�dS�20< @���A��t�kB^aVq(=#�#s3#R�mes�ThaQ>�r}�t0!.��mi��b�q$,aS�eBspp'$&�glG2{�7$,'cl�wk�d�%$9jE�"s}V�n"cj��s"�W <8S$a`qE7��a:�u�%�x!-�i�iscU�r�`B`UsfT0�6`+hqaA =0�*�vn��0D0$�Lk.`{a ~`3@,�#t��C Թ�H,�lqbq0]pp`f<!g*T@6 � olEs`T�? 8(Mrtipg�a�W}%l�gkW`ni�~�r_tms!64@JhFaQwg�$h P���e_.cy!ja\@ yn�*�$!h !/(4!p���9(>�D"0)U�,4D , 4 l(ֱ*< 輴T;d%(V�s . 15$,"F)2�%;D19�>"�5p�<dE9 (006ll��)Wi%[~.c'=;�^�y;d�p'�jm�sw��LQ3���(P�D aL!c{kt5 <�7|�r @,`Rdxq�pF,jQ~aSc��s��$c\aC{%u�,!k!�wc`Ep((8�Lib{��7 $D1Cs!^$`d0'd�sK1VXF,b�ls;�\9x ӭ�a�L0p#l"c��{v"TP~"�bl|3�]1p,dr~aw�DDfp�u�s"T<,�ciSr�w���d(�labZ�U!v4,(�A_q��u&8Enmsm�}�%*i�}-de[��b[P�qn��t_U�#TdP)Ru^~s�cAld |{x$s�[��k(%P}lh/Dt0 =�^$"Vr1y R��!�}0&`T1 �!& >$?7�e$V�$�!P��lH4(/"T198`\q~`*T=7(d �55(��4q=i."ui2)�T1�livfmQrl,o���t%%t�Td <D%cz19Sd@�na�ca2 -�'aQk ^0x&KoaqchT� bqld
# �n<*cl2�w�W? ,8il�����(e&�hp�DU3`,&Kj��3@
)$#J!swDu�7.I{�R`� maSs"s4$(3(w�#dT)�( g~��r��s(Aae)q�&�9z),bc�aws����jd�s���q��`, i}#�3 �34� els�!�qz.�qIiws%�y7ͺrdQ_4qP�4Iq~Yel�un[p�6tupu'�tmrh�%�Ec`t�j �*:#k�� ~*!TimQ?)(�W��e�e�l%��!�xw#��  \ nDT4�7 3�0 
0Ī�6"T�  ,$\]�h. �a0&� P1p`$�TA��)�\��pT14l�tW$ 3f#}t`vi1Ide)wM
p mPM`*$ ,C�a?s0`, Cobwc`��n�L3a4$�C!WsPw=0 $	pc�S$�: +@odQr�pV32�%3iasg t$�)hms� T5!%�N!w3T& $pcla��*45#h�`su 	�j#L	r{D;"$ ��ocs(Q;6�<p�xtc(0�,)�l'�#p�10�!#9���(�;8� �h%[�8L�4f&Gݡ�{�T15�$`!l1skCT1&4j6sH`1!T w ~xTE�sttsapip_ee�_�&spg[nemr~t�{1�ViRxh[<]Ypbb��%U2!5�st:6ddp2mlaJ)� T8b� �&�;�,��,�D4 &pV�  iT"tjR�b!�$�ITx,/dr#0%meT�%Xf`ܱ6�2T=s0.�P9Qh}���dhT%f"�U!77,($9	���[U}Dx�e|c�g�5{{�p,`#I��s�U�$$��dS_�$bqq`3ch	qd){SaT$(-H�Jw�rl@6 PtDp3 T(-d1/c2�pt3',�CHyq#`U; / 1,��(�b,b�}�sr��<Y, g<�se!]Q�l(claRp�\=8�*�ee+�# F9i�. jdi�Q�E�>�(e�Sgc�l3"�<C8!s#U144 kf`{3 T�0�db``u�$4+$alhs[!uq7(4�ye�N5"D2�{Mmfl~�u�_n",~9g�[p���Gzx�`U�fAst#gLn�ݺZ8Kot
`ov�dh�Eu*	}3# D�	%P2`/2^7 , P6�(dT-
�  7~��vw(�u8 <)9`.�\z; n`�50$���2��1��"`��@d.4(U!�0<�5�  at37�'�li+�|]|e:.��}���f`Td mSmuRq`R$$2�uqW ��<$ul5ss�T8 m�g�9rQ#q}��.�c{�2 �9c~y30@1P� 3-C�Ҁt7$�i'-�q�xv!��s�Asp<T7g,Pa�sr: Pu( oK0��V:,�0`le�]�Y; >`an`rQ�W  �l@��a�K�T�`, pEsT52 $ oL`rp D$ gl`{B 1�	l#adaR�a|04 , CoCwc`T�v�D /a12d�a-q�sp1\0K�_m�m
oDoQPn){4qr�u�kaew B"��_()zv�a||!T>�
#?&WT rc|ati��+1 Ux��pT5`(R]3 & \3 L & ��3 ,(U:$�Q�$!]8`,�V8(�`�(p�%X2� &5ֲ�(��9� � �(��Rw7 L�T��|(P�4`d,49)Qn%al+>u�:( %i`gyt 0sdc{S2Pi��1��$p$"cmirs$U; �c}mbj �	( j��3p T$4�sMy!p`P3$�(jlBV(T,!@/Mm{{�T���c�ar2"U2$� kdcvU�V%b,!��S0T<"l2cee�s��5X' y�p�r"V<� .�cxSr��' e b,eBz�T!&7,(a�7q��q=`slmSe�]�4+m�cas{�!1 �0gng`3�!&$D!B�qx13�aM )o[_t9`�I��)`mQvt^\Edqev�}Ow$gw*Sp([Wd�sAsafL!i:�*1gN��+�dev�-�+(�Y 44�",�]Rl(5`L*t8d,d�&*7 f(L7�lh@8�$U�.m0\e0, X�!��\10 < �Q1 , k08#VQ�f(�Tp2 ,�T)6 �'!�`oZuucfod�pin�h?	"��o)�*t�� �|"�k����brx,�$a�vS`,6Mji�2@T2;$#Kewd%�G-	{j 4	%j[c34l(" e�d�<
�  ov�fv5�#s-psp�4v,ri�fs� U7 $�rn`�s��8 �JTa{s)U1�80'e�� Q=2%�!oxiQk��]9h6.��{k��b�Q, c]�wb`tQ  �DlQr;054"<!C�ek�`�55),�,a~s�3v  ��j �{ ~93 =H	es�|[�p�-S_�d-�u�rkP-�w�_Th}4ewhR �WJ+dQaL ~*qn�s6��lad�L-j+8*E0,, P1�, �A����J�tU�p� tTqU,<!T& T0 ,TE4,lT�8 , 4!*hD��i�T1#$) GSu`l`�p� L �10 ,0D�s))@?*pam0x���&>!$ipo r, {l�s�%i. Gl(aR�Թ�,$cl`ss09,43Wa#q$t3b, �l1q\?�l&m$#Cf4  0kL`3b�q�$!cLazz�p�<$clecr�7)�dG�!s�$T:�9%1���;�\98� �E[�(\�0f6C���u�T91�4`#lAsgKT5&*2h 3!T7`< vvA�sTT5t`> Se��5��%51dcihsp4U;7� o|dc�(\7"~�J9dq_T-1�bIk,ai?dUk]q	N|unKG=zMx� ��3f�ct V2:.!�nvcpP�j�v(,�
�GDp,$dr3"%iT.�$ZDs �:�2l,�(�!YW`�6U'�$fX�$f"^�( 1  �B�3u�yL0:0l ve�`�$Z5�", T5��``T�6d�D3� &gJ#P:
~�iv|`ha=`,`�[���amawsTH<D`$dw�.Dp`&`j|�qr7U� H9b�aqc �34$ r�+3�ats�<�ch��7X<,�cnassT7A�`Kneys(d"�,*�#2c#D7"OhBm�S3 �vi8"gxAjsl!��3L!#r �0 ( #n@1s#Vq�n��a`css�T2 � cfqusXu13  �hir�`U$ ��c,�ca"^u�c� +|)r�(����f(q,�cs��Q7 ./
k��T]Z(i;_i'w�fe�OG)}d�TesfbR0)_ud�) &�ho�{o�k  ~v�avil�c9�$Ua�&V8t-�V2�8X2 ��0�4�T4$�X7p.$P7"�:P�",�Th$2]�1�h`T1�,mt5.8�U���n U14a�Tqq`Xt1��,
�;$tmvaf�dm)k��pu/�lm��>�mc�#r�bxy3,T P9c(�V�Pqm�g-�qw�\3#��}�sR \0 ,drd�wR(T (�c1aʴ4,,�cl`eSH9((pa`-�sH6`.�CM-�i�D�d�sLas%Vz!,$#i@As P! 0ONEwsbTp0( !IS+`D!�e,s`!f3E3wcm��l�gG q ,A�A31Ta7"8`Iq{�tt� *`ol@rzT16���klaWk8dѷ�9	
|�qLpqp%�IS)Smd%|Wre��d50Vm��dv$R#J�{ &et D?2*)c��y!wOiz|�4u�5�T0@(�0)l$F� |",!%3B��<1,8_6�(�^�(�Tp�B�9����91�,`!1.KT5&�2^R !T =@ t%�,t41vp. R!��4��&q} Fklmpl|%#;�FO^m`,x<�Le".��%rP0�.Az.`$2,$ChEq� 8b, �'SWy� &�m��f0T2v��!�ivcRP~"�b2-��W4`,!fnqcwiU/�Xcl�{`�6l,@Rh�s{Q]Vt-&cDgyR$f"��c�'3� �A%�cm`|P �u0"l�a�e{u�P1"a(��h�S� ���`<�, gS!@2(,&ncrGpd)-p+`I[x
V�5m`0cqsDt1$%8/ClA3s#�q4#_�ya{rfiqe Kse��'cbOt��d��r��dS0E68�",[S�ecmlp:�|o.��vCn''(f#y�*OL(��!�&�p2e� lc��T"�~ 0%0cU2!< ?*274@�nP� h"T10, Ts! dT1u,aD91�(hV�ttT�a,
F$6#mW-#(>).�)2����xu,|da�dA=clwRc8ޤ@UNkw(U`�l��KU0- mAa�%b0�<awj(80v� g�iS�H 3~�b~)W�q��l%)q�cRyp]�d.�a}|s;��v �1�aw�"J`8b}c�;0�0(�!mesw�U�`m +�l]QaT6��q���brP0a �0b`uWW$��  �#wu"W1C�$(cm�w�8P7 }=��3�T�".�Klp{ }p5� �A�r�T�g���e�_tqP�}�_Ed}g}L_q�sJ<dP]D-\C8 ʠ9�`d#m�\:{+b�ls. vO,`$n�AZ-�h�D�d �q@,0M6)T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...) volatile);

template <class R, class T , class T0 , clas 0  C$as[0`, #Lasq$3 $$s�acS"Hx(. bies0,T5`, i|AWzR ,�lAp{(L7 8 C,uQ� "l.Rh`ss { <!cl]ss*\}0(�reg�F10 ,0al �QT1:d<(cnas;0T;� ul!pC!R96,!oH sr�Q��	,#amms��20,`c�acr!\17& sm`sc p�8""(@sg+T19�-�el)sq(Pr� :���mz�Ty0epiu_m-m�er_pOine�{ues�F�(v (8
Co/3t`�npyld.)($T4 � cl- �r�, Dy($ T4*`73<*L7`. R5!L 8  N9@l!Vp� t0q .�P!�!,#@�3 $�t%< �"1�0,`p17 ,`p15%-$D�<"<`^1�2T�0 /n/) k�}3���olae+g%8;	
#%ld�
-�+f�mg BIOSp�T�_PEWT]MR_�UC_ICZ�
$q�plHt%$#�asQ"�n$ql%sRaT!� c�e�  ,cl`wk T5� g,!sv �2#. al3c T12,+c|)S{(U7"<$!tas�U%, class�t�p(`c\�w{(T?A,$'|ArrbU)b-RclA3z U9,8�gmasfS10 � c\aaS 2S`,$clasaV#2 ,�#��{r T1�$ cdasq T1|0,`cla�rhV�5� dcf�s{��7&",Vr`q{{$V17 �(c�ir+ 0�9l(clAsq1�1=0$ {l`s7 TRp&?)AyeSvuKpE2ha]i!IOv5n[`oUnperVeR|er(� Ost`aa�l`<:z,fzsub6oHt|hd�c��Tt!,)t�.`T2 -�T!!l \� L(t!� T6 ,0T?+$ P0h|4T	�l#E)p"m �11 4 d1 �"~q�<$T1$ n�T950$!�(&, t55 , V18l"T�1!,(T2n)7*	Te�Pl�u� 8��`�3 Q4�a��ss T ,`la�q T0 ,0�NqWc0\�0a Sxars�6�$`$�|i?� 43!,"�L sSi�4�' #\!ss0d7,P#l cv T; , #@A{s V!$ clcws!�0,�l9cc T9 ,aK>!�� VP l$Cl!gQ�pq3 ,�ena3S@T3: ."c&i{{!T5�h, �l�[0�8(, �L)rs=�!%0( #lAS# }@&",$c�isr Tl��nqq3pP�xbgdiW7!D!=��)cniaz �0�
9as^p{pl mSK)em_fwn{4-[j|%rYdm{t�p�R�(__sv�w!�|��:�*k�fs4 �{nc4e~t*}( Up , : . t4� T6$l@t4m!T5�4 t> ,dT/"(4T> , �l( �1,0�8#%$"W6d0,"�3> d0<56`!T1U ,"\�  4��!,`<q:�/)T1=�(��:,�Skn�t);�Kqupl!Gg =kLc�w#R,�#d��p(� $slqsz$1�F�s,aws!� , `,escPX2�,tCzas�4T52� �ness v`%�c|eS(=�l"sa12g T3 |�cl(ss"v' = Zla#b �"*�c`af{At h"j�`3q 10`d1�lagq"T%9a6@`|azsdT!: cha�c`T0� ,!;oag;0V4��$#la}w	T�0b$�elEs+!��5$$ ``pvc W�2 j!sl`�S�T�- cnAs{(V!9$, Gnia{ U�1�6�idc^t�p= iZ_�gmWgy.^qoQl�ez]�%rtuR(�!(O}f�cFo*`T?:#ng���todatil�*h)`T0 ,)ذ$!:&$!5(-`U4=,!T %T6 , "$U: <({ �$U70(,`T%1p,!T12$(D�s`d!U�0� Ds7 $W1��N(ܵ'� T�:* J(90�d&5) �Lh<id�)?MKHpaaxLaugx7cd�rc -"clAgr D $ �Es{!$, c.as Lb�$c|pQ0 Q>�4!c.qqS`V3�% cdc{v2U<�l �hc�S`�5p( ��a�; ]>`,��lars ]7"-(�ld2sT!.�e�k[� Uu> #has�$T%�&$8{lascaR�1 � k�1s+ t)3 < cL'Rs`P0n0- 3las3_q  m@ceess T11!d cNa{k(Sa6" pp$cs�(�w�!C(asw�e8 ,@#Lbws"T51(�$�e"�3 T1�,
zEs�TyPe!s��T)n}.�r{in4�st�@%q(R !_]�p&!Cod>�:2"j?N�V06ODstl,%*q(��)  T9 �E2!!T7 ,iv$ ,&�1, 72-$7-(T8",$V9lT�4@� R1!!� U�2�,(�!3 > T7ux-0t�% ,�Ty6(,.p15 >#�1 ( ! l!1�3 Bnnst nmju�c,�1{N(temPl`��0=kdKwa(A|0c|acq P,&al {s ^ @,hCl%z�!T� | �Xass R"�� jlSc{ �sp,��lars X% * ch�s�ta`, #n�s`�V(-ps|a{�0T���`ila3{!T ,!+lA�q(L|0} ol!sq V��h� a �cr4T)� l b�as��D!2&,)cL1!�13"&�bbac6(L040��C�a5� 35 H"oma#r�E1�,L i,bs� TU�8-�{xscs"U8`4 cl vy P100|aclBgsbpr8)>
�5S_�yj%@Au_M%m]�uoWv�hltgp5$rvkS$Rcl_r4lSa|\(W:(*cOn;dR�h`riwm"9( T0�b�t1 , T�4, T;!,`�4 ,$U5 , �6,�D7 t\�(,�~;`,d^r8$,!#q!l T10,,`�13�%!T94 , W�5 , <16 $ 45?0.$ty8c !T39 4 L�8!.nx)9MF0�et|ytm ,c|��S`R,(bl�sr @ �cl`33*T09,���9�D� ��cS#D61�$ |lqr�U2 , c�ass T|!<cchaws1�% � ceAs3 d�$-  lesa�U72,8Smesr0Tz l �lqwS } ,`cl{s"E9",`�lasc T11 p0#xasq%�p�!(#} sw`U3;a,��lass T1 .`amaqU"T1,�cL�sp��3# 8�+l-sw(D1 , cna� $�8�� �ka{s T! n`Cl)sc$u2	>(iFQ�pxzE aw[M%~WeJO�Gin�eb]p`wvb&; (VSs ieXl T
�*ckN;t$vta<ell*o("V2:,(t1�,�p0�!aL0�(44E<�u , V&4- �!|0 ,() - V1! |cvy3�."P1p4(b$33,$p0"�Ԡ=!. R16�l �!0l$41�",)u;< t21"�/>+�kof�T3
to�`Ei|kj,#��q{"Rd �lers Q.$ ohQq7"Pp0, #L�sS#@6 � WD`sC V6a- #lis{D3`,l"hu�w �4#/lc,�bc \$� �gTaSr$4!,2#,!s3&\7, cDAq� T8)*(c4�r{`Qy �0c�cws �00<Rwo`�qa�= l�cnhsr!T 30L#�l{23(U!� ,`cNQs� \1<�, ��s9 DR# - ch13[T>2� cmess F1� kje{w&t181�aSlAs$T�8"2clMSR$*�a~
��__tap]�is��e�}��o^p{iBd-r$aspe�r"(Ws�daGl�!P;*cots!~?lhtKjo2-( U0a���1 , �8.�t� ,"T5haU52N(T�,D6�,bT9 ,&U0(�T5�'t V11� X8 : T#!,10!, q�04#Tq�d, y1 ,�d	8"d �q� ,,T20 .&�* w�l$mL�;�-vfmJ/i$�(vblev�$�, s`�3S�\`, cx`s{�Up$vl!s1tP1 )$klus^ U2)"�\q$T!4,4c, 3s�54 - aDaso�T@�$fa�s T`�r<ars!�74��q1��D�q, a�c}s$|5"��#leqs T[0  �marsT!0 shko�at�"($ b,�S� Tq b&Pqs T1<$,"2l!s3 t15 � k]`sR)T>"l0a\arq�}16 . Bnqc� 4q< (�c�e2!�09!,#q|�q� T2 8Ye{tmpe �s_M-o�fu�^skMxver�t�7uD�hR:�_sgda�hL!�8�*�WO�l vodavhLe*8x0t ,8\3 `6 -@D3!()(0�%RT*�=0Uv�n"|:a��T? 1  j�t0, T6 ,�V7`%1P14#p1%!h!�14�)�T37!$ D��0-!X%=`>!T24%/.>�b?mkt14on�pqn-3�#ifH�EV _-CJB�F��dpNiq 4gnais0[$pfnab;)T�,$#masb P\�,$clAr,^1!j$k�c{3 V* /�s���� T38l(cnub P40�uahacs"|5 , j�s� 6 -HsmaCӠW'8$ jl`rvP ('c�12sdT) $$BlaY�`10"2sF#2r431 ( caqS@T;6,"EIawӂT-�<`�dpSs4V1t�-)g\�[q�V�5��0�bass P3&%( Gh�{B(�3l(aliQg �1<`le3d�9�(1i"=�sdac3hT*�%�ydb_ty�!!kq�edkUg�N^0gI�4]�_�es>�2(v4(OOfq3s�-) T:{+cd.s\ v�`5�`e�idDT0,D5!l0A6&=@t1 (p�4!/"\5 <0\6" O7$,�L�!. P=��"�p�`%|s18$�V13�$`V1s ,Q\�%j,� �5`lbV16$, V17p,(T�8(.(T59�0T4�)(;J4eo`lAt! tcd!y Z�*c�`?k ԠHcl#czht4 l!clas{4PA �!b|usY�T:*.$an%�s�T1 d"aha�� �41d%2mawS"T5$&"Khc3w!z*$,ulic P3 , �iy� �(�!`Daq5!T9`l"c�v�(u�!$tc�)s3%Db1�x!k,!uF0T3�", a}az;�T12�<�c�eSsp1~ $1c,ass W%n,#mcr`V3 :"c(a{y4D�>(�)sLass !", #m!�7 e1108 elasq�T:00��qoS_t!4e �3_mmMfU�_pwinvebmdusP$T(R�!��!w��amd E:�z��n{t">olATixu+)(V6�J P!(&`Vs0 A3!�D�5&�T1� 4v ,(T# h ]���T� m"V0$"(T5!0(\1"0$`T  Qd!$ �17 �1 jP7 , �p)x}`�pq$, D:0Y c�L�199J|aipDqTm`aeq�[ R-c,�3q\�, �ia3a��j!(u,asw u5" s�Yr3 H2 , c�cs9�t3��xq�a;S�VD , rlaw� T��$clars Tr � Flasc Tu!$ 'l�ss!Q!,F�1as d2 ( cLa�{�\18"f>sL�s𤖑1!:+g,Sqw Tu708�#xasq@W13!, kp�q� 92", c|i�0Ĺ%(= cfuo3@p6)�4c(ess T=5*/�l1s T3!<cklhsw"\18, as{$T2T ��d��4i`u isV9d>�tkK@{mm�gr_�Ast�b8_"h]Mfe3tc�Lf`T��:c�ns�TRo�A}1,%*!�"�`,- t�=!`�b,T# , �< ($t=�,(T2���P5 � t9`�T5 �T1:�|0R�1`,,E5 ,bv11�.,V!5 ,1T3� %�z7�`,"A1v , 4kp!((�)9 ' U3�( 7olap9<m)9

umM`�!Dmfcma�s��%;hcwc+�`,�clar�*((cdaC� Xy(n!rlaqs`T3 -Wl!3j0T3D> c<�RrT= <`c\�Rr) 5!,�2l1s�\&�l$cm��w(t5�%�alds{$tx0l(Alas� T90,��.c��4T0 <(+nARshT1��-G|a�s"T!2 , cne�3 P13, cDcsw T34$%1`as)*t35 �1!NeqsbTq6Tn��lpQ{*�=7"d$�&s{v(1�p- G,ess�U1=`,HgLi��p��0��xg�GM9ze y�_ma}\f�oWpkifddN_~gStqR(r6 yVv��|a*ltc**gon7taw'n5uy-�%( Up!� T9`l�Q�{>0T1 <"D6",\ . �w 68Tw$.!T( , p:"�!�d-��:4(.!\�`�<@|3'2,"6!4r,$17 �tq6$$ �13�0T!.� \3 | ^20	`ao~ct`���cZhNE!{
2wgmPla`5$\cLi{s"P. '�`{S�T ."c(icq�\2,1Klqcsa�r00cl�s ("E'liS�%T3 $alcSs@Ta, cda�k,\�!(p�,�Sr 6�=0slesCdH36l sl`sv T80()Clac�0T9b�0c\`ss&�10b,(m!R{@Y09 -�rDi�� U2!$#cl1�[%Ty3�, Cl`1s"V148l0C�a[dbV1u . othss v�:!d"#,aRҠԱ�, ql!{S Q=0 ,0cnqbs <v9`, #l`y� �3T :G{fROty edm;~mee_nwbOtji�TgrOtur$up*P��o&`svc3Mn�T>:(sLn3pvolct�lej�`|�̌ ~1$l��:0, 7 ,"Uy  |10l0U�0, p7"(6P: ,)D5�0tup�!T0$( U3�042T57"�*�h< (P\� , R86*�`4q� 8@U8�(#V3� l \6� .:nm�zHteo�hQbe |wlw8�-"#d�s T8,8�m!��(t2 �`#Dqrr T!`l$cmesg`T2ea�la7r T7 <(clAs8!Dd /�A[e3w \5�l�cLqsr"�&*.�c�yss(�`!!zisw%�8 odhmq?10T9!-8clIss"L00 lclm�S �0y , cD�sQ! 1"h�0{,qs� p�38. c�%s"T1`, Addss0<8� $#�<e3  F�v0�(w`wC3\5w� Ale�g�t5(d� ClUs!t1; ,�baq!T�0 8iesyUe0 Hsmml_�!jT`<m&r%�^xq�4%r8r�h_]t��tqale3T�9#Cmu�!4f,!t)Le+(��P0�� �1) �"l`D5!�dT4$, T /,T6�$U50,$Px ,=}1$<�U! 2l T1( 0U1"0-$D�� , t4$( U15�l(T1� �h\	4`,9�; /0T)&�\2#(*./) bnsT-y�
�dw u��pe(<cl�q�r,*s$irs \24!clqsw�0 �01$qs�T!0-�CLers(T2:,!Clbss T#`��@a�� D4.1gl0Ss!V5$#Ciyr1 ]7 8!#LasC �7@ a�asS4U80= blbrs)y�l"�lA;DY2��c|!Ss U11�"g$`Us t1�!( �<a2� T:�$!�lasS��	q)( cnrcvaP% 9�W\1s3$D�6b�!q��w{<�1=ll �aCs@x18!,�`Fms� D0 "cLc�{ T30(:HyepOT_1e`iKO,UI�TelWtmin4lp]�G�pEr*�&8_�va��� mnp::*cnmsp<b�\tpIde+)( 42 0�W�#hP;H| t#�,)U�0$9\5"<<V$-&�d.)@9 � � ,"�0#, v1)�,Da0 *\3-!UY40"0t3u(X7��$1+$=�V5; N�|9 ,P�p .�= zonmt�le%;N�tm"pdAe�.#Hasw�,`j�cs��$(ag-Cs P  d +le;3�q= casw�T2�l g�!R3`Q�` Cqc3�Rt",0cxA#rT� n c|pkc!\98,p#��s�*U�  &cmer_(uz ,!C�pSc#Tw � atc[r 5  , cda7c L�1*&g�hs� �� l�C`(ssBT�3d, s\aCy�]14�$ac3 )L9'`$+Lis`$E9r!8 b�Ass��7", ClqsQ#T59 . yEqsrh4�{ � 'va��$T20?,Jifp{txqe i�^e%�fut~z�)nvr_fakw�6�[!*YZf�s��M<e :8jo.gTrml#	m+i "V4",�%4 ,0U3�<	�0  �% < v`(�T"�$"�84..P�, p)0t�"T 1!,"\e2�( D1# $$T4 � �1% , r6t, D37(-,581l`|3$ ,,R208*.N!$cKcst(f/|ctIld(
-3&.4LfweeP|e2ef<al K�0�,`"\ass(",�alpy"Vv�% s|a{s"D1#, cdavW$Զ`$c�hsS R2,��|a{*T4`l*cuA;w V%`, g�cYq �< cz�S{ T7 )!#maws1T8� cLazs"Ĺ 0a|pss`T0 , cDazk T3d cja#s P13 ,$m�a3S!X	 < gl1p?0T�!( �LhSS T�'@,0Ch!qs"T�5D<0�lecs"^07!ax��%Б8$�c>a�w]9 �"class0u"`�%
y1w_6yr�(!{]m-��&}j^t�NDgRw`mR4%c R�DWcneqi�T(�"jojwt foL)4i�U*) !D2@,AE*, T6 ,#\3`L#�8l(�p�6�.�V7�d`8 ,�3= .4R50$�#401 � F#�,�Pq#�d V1�cT1�1T16 �`V56&)�|�( -p�!�   T: ih1*KB'Mpl�t�$<icrc z claS3| <�c�`Q3`�1(<"3j%rs`X�<#a�ars�D6`� sd`ss \7)l"�lac3(�&�L c�aSs!T01,�5i���zP7`,i\Bs30\7)�"�,�9b T<h cncp5`P5"("c=`s�`T5 4 j�esS�T!5- h�ssBV�� ~ cdY�s5đ�,��hisg V1!l)g�e�(T15 $1�n`sr)U11v claks1.4d cMA�s V08`/ {�cwc)Tq9�, cl`�3T48 v-yer6�qthaq]nel_fEv_0#`ztw6_�%O\Er.R+OOdV�BM  >?*c|f2v �e,�pIfe.�,(P0�$ T�$,$@2`$ \�"��$44 u��$j��"l T7!(8T  .@]=�,�T12`=!x�1 ,(12$�5 <Tq<"Tqw  ,q(,^X17 @X0 $=8 < F� +pco$_t)��Etdel�te(X#n�s�(rj"slasz� &��hwSs T�"/ Olab�$T!�. �-cw{`T�!<`Cliss#~3 -"�|a3�`V< ("cl�wr D% . !|`g3(44 \ #l��7 TW )�"lAq30T80,"c}mss �, kn!s2a`4p $ c�As�$�11�� cdab{��6`, wba7S�t�5a, CnQ�E(r�6"m chesr T��,`c�6sq T5v!l �H s�*��' class 1�`, bd`ss	D19  cHaus!T20>Y'�Ot[�e(ic_( mOb%{_�o)�tErEpaR�2 ([_ceEs|(T:2��/nsf*fkdA5]<e9- TI$�*�q0�\??$ �30< U4�- P�% Z> , V7 ,pT�", �8". GE9B,bF#(,`3� ��T0 0Py  � \!= ,$DP6(,$v1'PTdT�%-$�;9(�$T"r( 2Of�t@,eo?9h�����`lar% <sde�7$. g|awr0T", �(Bs3��  flaqR\3 .�kdAZc T6 /"gLe2� V#(,(�$abs0ݵ0-(cOaw3(D�0,�Cxas{ \4!$CfasS�X($�mks`��8,!a}a�1(\x Xrjn�qc �0a�0clqrs"Tq!a=�Clas�0U�l�C]asv(494,�c�s3r$g0�, c<,sQ0U5�,pb|es34U348l�wmcss!Pq?�, �M�ss �`h .`bdA"bT�8&("cirqp8t! *�
y�s[�ype4hs	mef�oK�~m5erߴesSeR(R(xgOcddCl`Dz:..okp u^��ime;i($D"(��qd/&U�Eh t; $V� M*V60< $ .08?($D�&= V|(/�T0 , �#1 m$T�p , t7a`, V9< $ �1 , �5 "T� x18!$(\�9 ��T�) A�fs��gfaf{ji(�
Mt�m�fivq�c�!3s V(!a��sst &f�desM!4 ,hG,(rs>�(,#�eZc!T68-�rlasq0; $ !li�c D6 , c�!r2a5�5`clc1�(D' �b,��r6t� &�k|a{r!E�$l4�,a�s U=0$�k<c{Q*D1zl1�kaqk �13``#da�g!1"(a#�aws�T17.4cn�3k T15�&Sl!sj�07�<$cLawq(T16 $ c-mus 19� �xass��1<(,"c�1�s t5)$m%#|aw T30�:�}er_\�qa YCLm`�W�4n_�/in5ev_4eq�e)R+��cDmCL"T*~(a�nsd`vkmA4imG
		`X0!, V# �"U2e,�D3>%T,!. T5#,$T6�l,XwA(T|(,$T� ,"t9 &.0@?X0�(�5pb,(\530,�V50,�D!5�(F14,V<7�, E08 <0t1� , T&0(�.�	!)
��mt|!t�<Gna3s,V, cfM�� T"$#uh�{c�XP0i,ClqssQ'&
3#deCS T� >"cla{z(V2 l$k}x{ P&0-�s�³�!T�(.!slact 60(%cna3r t� cd�s� t#$(aLSS� Dx�$rla2c(T30 %(gx#rg`0s &!al�b7_2$<+0lcc� T178,8`|AsS`�0"$cdl�s.T25 � b�a3s T16 ,B7lc�q T�; l�c|iSr G1=!0�Lhr38� � ,`�XUss`\>p�,���cti1k(iw_mam{t�Nqggz�yv_$Esr��j�`,W[g$gca�P>+�{n��#VkladyM5*	((T&�U	b,5U
 ,t�# �.P�d Q5b,@Dr)` T7'%Dt1!$1�9" �1�8<z�0! > 92*, 1k ,0T!4 h�T9u �(L16 � @13a�`E9<$  DE� 8hpp0.'.+ #nnsTI:�dvcuR~azI =g�mS7`T^� l`ss"\2|(",`�w T3� !c�e3r U1!,dievr Dz �&Cl�"vTlaknbsr�U`�8"les2-U� >�Glazs,�>`( gldw;�7 $Hul!zc D\08 cLes!D1-�cDr1 D�t`>(+nis� �1 $ cm%ss$T1(-4�l`rS T238%�cnacs\9� nh�}!s� T3&"lceasw Dt4$�!C(mqg�U9sa"clK�w8pJy"d �Lcsi`V18�,1c|qws 00$>+eu^`xr�`a�_laoVne}_`ni|gp_vqqt'� R0 }Wb`e3| pr:(u�n�qav+m�tmld>1( հ ,&T5(* T:�=0T7. v&,0T= *!�!+ T ,T=(o Z9 l q(�,T���.��2 ,"T0w`l�T56`<#^1� ,Ht6 �!P17 <$T10 "�!,`H� `
*.; ~?A|ode�

vtm�hAsg(Tahq3u F�3lA3c!\ ,0C!qs"б  b`Qss0ԁ!)�q,Cqs(D6207�Ec# 5 ( cla#sbT|��$char1�V",(wle3s"T�#cMaqy"�7a, }as{ : ,(g.Cs#`Q5- �}czs(d40& ',�r�(Uq3&,1#�1qsb�94�d"#las�*Tq; .`cnp{S t1� <  n �qTT1=:< Cm13c`�uV9,0ah`s{$T17$,"cdassr�01, #AsW%p0=`-"`�aq3"T7 .
yef_t9pE$!g�m��vu�_a�inte2_<eQPul(�bh_�Wp%�|!\::*coo�t �/fi4i=a�i� � . T48l�T7���90,tZ P1$$D '�P7`*$T8d &T� �dT1� , \1�d, T!2 .�1 l(L%, Vu.0�	6 < \q5$��T�V��`T9 $bt.5
n>+)�c/>3|%g�maghhe�{L
#eFdhgtompncfa <c|q�q W< clars�T�| cla130]40L`cO�uc"T� , !lk3 W3$�.(sr$L4|(�L`�sxTti,
�Lb{S$T'"<("n!�W$�"@ bLsL7�lhelqss"T8(� {��rwV|dytqsb�Pqq(, Bmb3{!T3!,4c�qs�t3zd8 al�us`t;f, `les#eP14ilHclG7ShL5 )cm'?i Tq6"� b\iSq(T5;�4A�Dcc �18 ,$E�qsr!V1;< c�%s��6�1, a�C{s,`21�>�dr�Tpi a�_meo_u~qzokj�~��t�)dd[, 8�>zfrkfS4�to|!�)<e(+x V�$, T��`\ - A� $ T4$pR5�<!N>`d 78=@Tp",��p�-�1�,�D11)�p�82 &0`93 �(V10 , �D, T94"#X7=4�q�l.0�4;:� t22`<�T1):��z5mp~r% �C%3ssdP!kdksu t$, lass�8 -`�laSs!10 gnaUc T� %"C1[A3�<�&Ss |0 |"ChAsqbT5`�Acopr3 �' � �$e�} U'��0bmias V($, c_!3�9 <db(is�8|!3 $��y}�{!�s &hiGw�V3�� ceapb&Tc�<$cnasr 0<$l&Q,��s(w %l khiWw�P36 ( c�`ks"V1#@�����u3!tp~ >(slers0t5)0, S,c{#at08(�@�lQwS&D010?)ewWth`g ir_eem_g�n_pjmn�eZ_pe��(R(P:;�g3r4vodaild
)* Db  |��� t� ��@: l 4�l�\1 0T4�.0U�,`}(( �!<$u0�,M^q� ,�\3p�h0V�3 |!E34�H�95 *�12 #\7�LHU�0 ,8tq�$ &P���j'T�*pcg�wt�
J�a]t}aUi"<wHaqb%2.acea#z)\0> �,!sq$�0`,!cIa{�\0 -$ada1r!R3�, f�Ys3x61 , bla3{ D� O"cl��w�U��, klaws:�2 �0�lmsq`E?�?`k��s!N0 ,`kdaSs1T	h�cdiss F�60l��LasshT�q4a`lassdT9 .8c�!w� x=3��$`cSs�|14 (2blq{p�P9w�,$#=`y�iVq5 m b<qwwaEt7(,(cl�as`D�((, niw`V<�H0cNcss"02#,ablIj39Tz;!>E
YEs_Viqq"mc_maM�g0._r�in{}�W6usTm2(�qiT:,cost`w-Naeah'k���D� % V�"`\2!=�T#1�(T DaT7 , |7�,(P�$ Wi| 8!�"Tr"l �%",0T5r�) t1#4$P1$!>!P95 .%�1 ,`Em�� V!=P<&�0 $8V1d-RP2q! rmha�m�e,�
te|�|��e =ahhwsPR<$r,`W3�&, #l`Sa P0- c�G�s U�0.(�lass`U& L �l�{p$T}`, r$asT4`<dElasr!u,0cla3r \0&N Jla�s2W�;l(r>$3� U4$(��disV
]= g"%^ cS t;84- �dCsQ(T11a,�C`ccr T�# � �Ppb T�4(?la7p0V04$?#|�q`P5W0( cl{sÂt���d0cl%S�@1'(((l�s1 ��=( c|asG"T%�1* cl`qS 2bt�rmts� ���<%�vew�ty0g
�{_mce[vu�����^4gb_pes~uz-Rl9p8>+go/q7!6olq|9�E�)<P? .!T)�� T�l(8\1#,(U4$8!T1- X&q( |5 ,hPhD/ T=b,�D"p� Tq1,	UaS,bP13b  t1��,6�1% � D`6 .$T�7 ,f-8�l`T!0� D3<2hT;1)Db�bW7`v�m�T�,E)
JCi�>f���B_CT]Wt[JODDLI@?H�_IN_FUNAWTSQT�HF�pdmp)Ivd@c|as� P 3ea{$Px� bnc�r)F0d% c|!�� T7d�$flas@t((!ciIsp`TP(f1�Laws�t@(|:�merq DeP,�aOd3w �7�,�cLeSr Dg". c�ySs�E�`)axas{�=n xl!s3 T10�&(Bl`3v-T10<84c@�Ss"T9`d4C�aQs p19.0#l!�9$Ta�",��lQrST�u�,!s,aws(\�0h,�3l%0s��}/�. cn!�#"5 !.ao4asr P!=�-,alavs p0*,!cJa o$�1$8lJ}Acty�iqEuD�btLOp,glu�r_t�;p�z"�,xRx>:`=fsnBv�|amMhe/#0!�p`,D!!�T0a,!�3 , T40,>x51,,D7`,$T7m V-",,V7 l T  >U5!�,�\)�3j T1r <$D1&,�T15!d 16!<!T�u , �0:+�!!0, �221, �6U�//4));H(te-0neqA �&�!7s!R,clYrq�T0, c`auq \�1((cLas�`t3p,h�h �wT30� chcw; V{ ,`cua{W�Dt���cl`�{ t5!$p!l@S{0T6" �tc3(Ts ,dCla[s3(m`�laYs1�9 <`bd!%s0U1 * #\aQ P1$,0#Lasw"P=6 ,"c|Csqb�q3 , cd�rq�Q`"�(Smacw P99 ) r|dsr u1&�clq7c"T11$~l }�rP7x" c,cQp0\18�=`c��rst04 ,@#lYrc T258^LyuSWv)qe hR^M�M�fun{po�nteR�}sTe:r�T:�*afnsv$6ftdI(%*(2H21 ; + T01�!�3<�",6D��(!�6 ,`U7%�bT,%. �"nhP98(�0T13�4V9 .1T#3",(P1T$ D15 L(F4" nX=�!�18�,�V0�"4$T20 $!Ty!�./)�.sd:;�Y
vaePl�tI <q�a�[0R�clasgq�<`�V�!}�P/ BlQss(T�@, �,aG  , �daps.3$n1cm�ss@T� ,(�las� T1 , C|iqwT� . ahes�0�($ ah�ss P8C,%clasr!�1 "c,cs�$Q'0 -�k|css"T910|j�as$T#�h�0��bv#�T!c!.�c�aSs"T�5 % mma7G�T0=b.a#ohqq, $s(fzs"P3: , �Aa�sqTqy1L!#La�r"T�y0, cpAs� �.0�� Cla�s�T�1(:.
qm{T�yxg$9sv-e��f-�x}j(b7z|Eyv�z�V((T(.�?nqu`v/leTkmd*	"P3$e  0P6( U�,,�4 <�0b$6a,a\3 ,p<�- �9 tD�p0,$D25�xa\0: ,0�0# . T5$ ,"\�1�&�T�
P1/ (1�00�(T19 lD'�!<$T09 &(&a Ro}e�h��i3-JO
U�mq%%0a&.#�a{3 r<$Qlk�S  ,p�l�cs U0 )�Jl!sc Ta"�{Lu{s`\$ ,3ch!ss��r�<�#m��v%T4)�c���s P� l`bniis`\4�*�#agyHV7#( rLps�@L8h-*al3�sHt: <Cla�{i04�, BNe;q 1((eGyaSS T"-.�klasS(t13 ((C| sqL10("c(asu|Xq�,.s5ys@Tq�"L clAs3v5�*l$al�s�`\�($-�ch)7G��8�%$�)dqs�!T:)  $aavs`\4�Jygctyp� is�Lo��$uj�x/K�pEr_9ts0d�(R$h�8:kolr|$tghdd)de*+(!\0`�D!!h0v,�T�($ T(&(U�.�YO ,&�7 � T��� T;)h D0"aP3�<2V1�@.pt}3 .!p3� P1b/$M1�t�,@1?0< Tt8 ,DVq� ,"`2(($0t2#��/9(kmn3�0�g} xLa?aNd�f	"#!NhMʃBK�T��P_TG��M�WGUNW]S�R%-0l!|m`<slisS4�$=3lc�s$T"(�AHe�s$t0>!�b�#3D30�chac3 T�B,#�,`s}\�,$a�a�1-T40, be�c�T8h"�lqsp0T6 -TCl�ss!V4�(`kla{s�� % cl�sr$T9 < b,1ss!\2 `##ba�#3 ,03laqs!2 , �mc{3 Ա1�,��Ldss t 5 j �lEss!x1(*`d��p;0",i`narwaTw�%�f)ss0T1�`��Klasc �19 . CmqsqpV:2 $!�daw"�^2��:
yec�|yvd(msWemm_d]l�`I.t]�<Grad�)�s(_CtdGh$)(T�:*#c~st odaphh|&(, v #, t1"* D1 ((x2�(d4 �8P�(-Dt%,0T78(2�:x,8t�/ 1� `t03`�1U1v , T12�, {<", Գ�� �q�$�"Q7N,%T#pb8%T19 D |"$�$0U�1));)
m*q/�|m��"<lacs)Bl #(Aq �D  �lqsc"\1@�(cl0sR�\,0f,�Ks`�2 | gLcss%\3 ,`cLasW T6�`�mqrs��5�| {T�p�T> *0klas{�D7`.cj�U#D8d!g`aWr S�L� j\�ss&�18`- stAu�E{E�,�"dss0T1>,!sless T!3 ,
Al!sq U1" ,"cdt9�0D3"`�(s,$3sbp17!,(cja�S(@A7 , �hAs{h#: $(|C{W Ts9(,b|ay�E"� ,(s�v{?03i3	�ec_txpm i2IE=_v%f�rohzvW�_}O�6wRh)^3t#ia\h$T���-fsV tn�ap�ne*)(�T `mhT1", tr , 30- O4 (t51,@P�
�,T . `8�L!���,)�11 ,�T59 ,"p1"(, D10 -4r6 ��U$. 1M!#7�| \!)`<(V59$" T2rb,a�1�s},{6);(N5g-rl!?%04knaWs"L kaqaR(,��lcr;pV�5,�b~dg� U1�$ml�1s0�>$l�soar!F1 %e�aCs \� � qh�sW,T1,=a�x����P: ,(cdqpg P7$,�ahk�s �8, slGw{b�i$( 3los[��" �0cn�`9P!140wa�r`^1��0{<a[�  : �`��+sU Xd -!{,sv7�`55 h%B�dws �11t`classT1", Gnqs10D!9�, 't#qs Q����(cm�s�%T36 cl�Ssj�p2~yak[d�PE$�uWIe*_Vv~]hCijueR|t[�%r(R$)MWswfQa�d0p*B(co�cU V�lA|ilez9( D8 �$T1�, U6 ��)�&&w`z`1(,!V6,,�}��(!M( -�AY(d$U10)� T518b�12$`T�30L,T1@|�T9$ $)&�,!P0~(("�1B,!T=y 0�T2 , T6�)(f[,Evqxe)z
	Dem��c�� <cd(q�B,5cla�s(E�,(�}a{ E�!( �\)�kIt5 (ik|ir��D3	l"bl�s3dD#(bqmars(Tu (#cmc�2(T5,-�+|Aqs`4,"c|asq"T7!,${8awg 09`,@cn�ss�T� -�#md{r8]�p��0clq7shT�1(% #dQcs�4=�.a�l`;s @q3�l�cld�q$14(l#c~esch�0� �<blyrs041t2- od`'1 T ' n OLa+s t!0&(�Cliwc�D1%`Cnass�W!1#,��lksU7 :�
y$3Z|y8e"i?WMeo�b5lzfinter_<�S�ds�0�z_t�sAm-(\;::{nnv|0V/(UD)n}n �"�10$ U3)��4 $ D�@VX ,@T5"D ж<t60-�tx�$Ty ,$3p),vr/q�,$V 31m!$;; ,$T!>  �1�(@T1|0�T1�`, \�8f,"�19*x(B2�t $T1( cn.rtp�n\at�heA)
v!�z<At%8cl�us!_-�sm!"pT Hcl�{c T3
,tcn)�c!�1", k�q! " c�a_s$4�!8�|�u 4z+ #lakc`'$�"b=�g!�6p((ciass`t7�,nslaSc��((-0Bmpss0U}6,�g�q9b$\7� 4�,ass0J�1�, ba`3�vT6�l�amas�!03�$p�L�{�*�d4.`#|Asw T8u,"p-Cs{(T6p,�k$�sq�05 $ laszd]4<�, s$asS�t45 , w|`s!T28 <`nap*6�>
��S_�pu ys{M�]�&uo]tga�qEr_�up-tc� ._Q|e{i�L�Qz;"soj�v2vO(Cuolg
m( 0 $ P&,T0c. �7 � ]6 ,�T!AD�`< Uc, D8(�$\��< 4t1(� N13"<�T12�0)]=3$$m�9��,0D9, ,(t16$ @9� ,t8�d 1 P*` lT2Q$.�.-!;*-Kweup�;z��.bLqS�8R- ��aSqu(,�rd Sr �1p% c,![$\��t*��au� P:�.chaus�T)$,(k�as{(V$!-(c�q{c�|= )$��a{b��w("cla�sp{ $#lAska�84, c}a�� L) 4!�,qs1 E%� , a|`Sq"�1 ,0!mm`r`^qr , ��!�3�P1��($kny{S0ܱ� - cmasr)H44(,�l�g �!\,"{XQs32v�($$�na9� <q9 .�s�Wq�D1( � cmaR p }d&aSv(TX1)yfs_}}pu 	s^d�}_FqnKhn9jt`r$4%r(r)^_St �Qhl T3z*uon�tAvw�atkOg�*( T!$�P1 -@\0�	h3�<T $�F%), T� |$0,#(& T9 .`�9�� X110*�T1r d0\7�,B\��i< t1= � � =`T17 ,!T18%�99  p&!R>(T"1!*&.$sN�S\);G�=�uh��<e�,gmqsw'h-vm�1s �0,bcL�7b"0" clary0V(m�alawS\`<$+hurs`�"'(c<hq{T4��
cdc[r&4+= c�cas$V6-ALAsg Tg  '|�r�P( �(c�aus0V1 , {|lq� T00h!clasbd!! �$w�asc`V1"�< ghazs�D9;)�$b���s tq41<C|aa{T�E/��las{ T5> (�c�qus�Fqw %�cl!r[0T�� < glawS`P9�,"Bn�sw2]:8- 2�IS�`T�q`|
esOp{|q$a�kme%Weu�^pOi�terZ|uplex(G`(�_vcsAlt`:��Aqt(7na��\E:((�P *Uq$,�T2"f!Tq+2Vup(*R$-�b0*"T!, � M0<"�p$- t3i-(W!2�$ P1�"- �1 ,#U�U�, \16 4(T�7 ,�q(,��1)�.$v2q`<*r#../-�v�,I$i�d(�*tqmx��4e$4'less" sMAcy(V
,�C�aQ{t0  claqc 14|0g~isqLT28� cqrs1T�4$ Sle�spU4`$"clEs�T7�� a��rQ�~3 N(cl�sp 10 ,!Clmqs�T8dd2!h�s� P8*8�{l�sb W12a�wlcUst1�,3#l2wW1�b,`k�q�s099�>`"l{3 D9T/ �\`wcdT$!d0c|iWy �1��� #m�{r0U1>`|�clissj\1< $ ehasC"P1,�kL�ss��" (�kd-ss(P2a(>l
yes_tpe��7�eEmO&unfpoINtaR
tester(R ];stdcAd` P:#fukst Ag�abile*), TQ l T1` P h T�dl!t< <P5 L0V?4l"v7�<(U8 ( �0!D0�&T3U�(=& . P03 �0t0�, V1'),"V? |�T19�,4\10D
 Ts)<,64 n��9!
./? �w~�zf.d�t:lei;M

#qblF�v0o[NA�eeuEmPF�tE@<aha�P!�wda�rbT0<$noa7r5tu2(aClbc t"4"s\a3_ ]0 SL##� Tz<f|(wq4P8(� smyw:�5
$!��b3q V6 n )lawq@V6"&$ClC[ V !iJac�T9 i c�is�"10#$ c�C#1"�q0 �<c,�s3(Tq2"8%#,s�s`1�,�cne�STp$=4hc,i���Dy�$/#AlAss`\9��c�+b�0t97,g�a�q �(", c�a3W �1y(� cJg#{8Qr ,("LAs�^  86�ye�^T{P�i2[�dNL}j~0im~�E2t$str+R (^^A#tabml ::(bEns` t<�4ilD/)h"�0(.�T�� T2�l0T50L \W�,N|!,`\w 32lT8�&$U9`,Tq <,!V1q l T�`, @4sh& L24(�"T�$�* T�,T!�`,$Tu9 , \3� ,��r�4L�p)��:
5dm(lHpdm<*(eqq(Rl�sl�c3 T$!w�a37V 1*`cl!qS0V50=-c�sZ!T"  �,Agq`5`,Ta>�sp ]4 ,$b|��3PT) �xar T6! (#na�38@? �0k��qg L8 �0q,ISz!�0 , cle�S`|1 �-4als3c s118(b{|as�V�
`l sess0t7b,5cl!sbP060,"clasS�Q�'0< �hh�B!V�7*L`b.�ss Dgw$* ClasS X3� �!�(`�� U980,�q���{!Rv0!,clev3#V0!�(�my�t50E0{s_�m�WfU�pmhntes_t�staV(�8�;_na#tsl.$\:>+sobzT$vo.A|i(u*( T!"� t1 .�T21H5, P� 90Dt � ^6 (P(j�d\  T;.(V�2 <@�p30dsT" , t!�%, \�5!�-Tq%�<P1>4l`U16@-0U18� Tqy -#T"� |�6���3mn{li�M
pui5l�ve��dpw{!X,`'8a{R T < q-q;;d�t(c}ssr�q�- WF`kp 2�.�zmar7.tSd<��n�rs2u4!,(go rw6t1d= carp 6 �m�sWQ70< qla�qpPx <(ae`�s(T8",�slscqTq� ,2K��WQ T530 bg1�{$T50$!a@sS Q13@(c�s�t�4�(!narw`�1% R�h�qR!T2   cha�c0^47-�gL`sC�D�8�,�CLa�r<t8=$$�e� qSd� , sjiSS�w61�4	
{m;�pyra�(�[m,�[DqntoI�U�z[��vTc�8c0Oba�5c!d~�:9nb_j�d�fo�mw�ne)(V8(� P1!$%aR"&(Us�, W�*, \52, f7;,4D7(�aU9 ,�T)�m�t05 �"ta�"l!�)�`$`T12(�#V9� �$U)52,iV!4"l`H9}�!�390&4T39`��T22 , T21	!tOm!pklty; E�pe�`lGt�\lc2s P<$bdasr \*� n�sr D1� {l�sq:T13�!!liq �!��k=eub!T6 .`glcws� 'k�ass Vu`- GLdq(e" ,�kH�3uTw4g c�a3q�j�< �Hasq|\1p, �^q�w T#2  {m�vs0V55 l�3�a�c�u�3.f,/sw0Tu# ,hcl!P3,T5&!ld�|Irs"D53	+mcl`�a"�q6`, #lAqbpD'rn!blAs# T0x < claA�!�#"<pcda�bT8pl&�Hs{0T81b<t9Az_py�-�i�mŽ^f}n^X�i��erwtAzt!R)p#(__bqstaahl(TZ8"sKJcd sg)pi�e./�!T0#,(T1`(�S:j��s < V< \% (!Tv($T?`T<, T( < E0r ,4�!,3\9r", � !, �06�,  ?=@n`� � ,$Vy0, T04F��19!l�v>3, T�58 c�vc� gnq�Ifi!)M(uu)f}at�6<"l)us`R.�a<aqW)H�,0�laA� 2 ,0c(e�abT��, KD`ur T3�( clacw0tr(,tg^e�saT5 F�lyqs p?($ Cn�{�)�",(sl�s��`,`R,!ss0�q1d,B�wws0P9" &lAsS�T�20d$#N!qs1Ա%p�%c}ir3 Ds$,"c�%cc(Py1 �kla�#dW94 *"Kwasv(T1w8$ kmqSs V)2`,cLe3� ��7�,�rmar3$Tp�!m Mu�`�!� 8 �lat`T08 % g��Y1 T�1�NqEs_�yqehl3T�u�[funOa�xnTevxgst�s�R0(_Vn�Qvca��aT12.Qm~{)�vK8a�qhg�8("Uph&45 '�6s!$�W3`-lT!,д!�C� `&T7I<] m D5 | Fs0"�T11�, p)6 !T00 f`T9�!	#@15�l�U�7<xPw`+"D1�ph T �`<!T2ph$�60jf/.i)9M	B�}�pHa�k)<c|SsbL� c,arS0\ L�La#s \R9=`ql�u3��",��|ss�E�`l a|pss <9�,(#x b3 t��d8��asR 0%*, Ses1{(P0#l(#e�;r T6 ,$Clg{�".  clcwq2T	 (6l`S |9 <��d_w`q3($Tc(�3{\3�(("}�q{12t��pceQ3u�Ty7 /`#Nuss �q7�� �lapS�n&(< b�%sf 17!"onl�s 18 8"+$eisT!h ��slss0U2 . #mak�!T"1�
}ds_d�pm`iw[�5SFf5n_p^ilvurdeS�4r2Z&h]NgctgIl`�T2�;�)n�� wgla}�|��)( V(. d9 $ T2, �W`, \7#,"��4, V�$L$V(, ^9 -`U90� ���T5�bl T12$l4T1z -$41!, 1 d�T16!, T37 �(0�S19$. U�  8!T29(�(cnsvO(

tGixhqve4�b�As30W cLa33�T��c0a�qU $,#qaes"V1$- cnas#T2 ,$s�as�"t�(�A�!{q`(l0c\!ss U�"!o�asv(T."l '�q7chT7!,cmass\x�,0s�qq���; (cd�s T1�(�c.oqS�T���< chBss T!:Al$bhaur U93c6 �,a{#�U�4d #crs)T15�,4Keqa20\w$l"c�esc)u`7h8 ko��cd^18,0Co�r5!D08(&$ClcS �25 �LCl�z�!v�5���
yesv�p� hcO-mm�dT/�hoibtdzy�ea`armS�(K^f��u�Yol �:�3gn;u&v�D�t),!j;��T0 ("Xs�-(� y^;`� U6���1(,�TV ,�7Dl �8$d�U%, U1< ( \�", �32"$8Q0�",�T14`/�T0u , T4)-dT0'") TSt#�t10� p34r<"L38!|v+�U}�qti�e�:��-
laM�4av! �c,ass�L #eA{w&�$,8#}aksaV $�yhpGs Z10,$a~ac3�T2f, cl!s1�t7($3f�qs4�f�,ass��eY$al�3� Tn",c{lats V# � blc�{ T(!"#icys!M�3M c�e�c D`�  �asw u3),, sfsw v%0  chd+w �;,/ km]�r U!76&8clqsA�T8),�o8cq�Vv , c�asR$5�1 "#nac4A9��-���a�c P1� g|es�`D#0(, ,a{3 F2`�-yt:Ut�Pe`h{V��/^Vt,N`omO6e"[t$3`er)B,[_fqsdcaLl �>�*Sonat-�Goc�ile*/H�T0%< ]1"lDT2 lT��$�@� l��7$, T?�,��7 -09a,W�&- T02� T5e(,�L3�� T!�H W< *.T0u .pT12 � _�; ��a�".0`1|� @240- U29�*A0b.nrt v{nB\il�9{�kq^d{bL�1%-��#|e b@B23�` cbss U0) `tazs@T0 #cna2s`T50��pQ�y T�� Mics�W7$-`q_a2+1t4!( cma��"���}�aqw T�+ cL`s{ Pu! c�psS ; ,cnYsc(P9 ,b"l"s�U11` l�q"T1q$ `lBs�
�5 %"�h@�c ճ� ,`rlcs11X10,, �npsSV17 , bl{sR�w>!fPclqk�P1�0%8kn#saP58*.�{.argpT!=1&"c�ass!T6" !Bfe�S#T6s Ys_v~0gH{�Em��un�yv5r6�rxeJD �_#fiG� T):*chovu V{�Dzle�(�	�4�V!!,4\20&�Գ , @
. T5 ,)P6�M,� (]0 ,DU?�$��19)�`11��#T1�$4V�7`0T14 - Py5". T�p-.!L;�Ā�F��1x$,!*�!T"!! -MBsu�tistM <k|�sr!Rd ul�i�AR(x$Q�!�3�T�lacla{s`t9 ,`cma3C(�8 l�C�ajy`30lcnasz P�- blqsw$T5 ��glcs{ T& #"Li3q T6 <"#,�5s Tph,��hQ{ST < a|bss8\3� ,"�}`sv �3($�c|bs#3�!1%"�hm�q0�=3 $0ala3s #6&m(cLgy'Tq50(!,�wqATp*�, !l!sK�Q0 �$+zasS(T� �8c�q [0P�0D �gu�u!d00".*cd�3s *3 ���e�M�9�$ Ig]moi_ww.Lpo`ntuv_|gg�e~l� 8[_
decM>T:�+�G<3$6�M�tylE:]((�Q /!T�2("U4!, U+�l�Tp#<D4h, D> .1T7 . Vx 4(V9 h P50 d �1$�$�2!� �110 V�� , R15`( t16a$$T13�8ts8($4_��($Tx , T:0)bojs&+!�
�� �}ue(clqQp2Z 3lt{ U!,@cNEcw Vpd- cl#S �(.bji�s"V2 o oz`�{%\3(K.-s��  , knays Pu(v�s,a2w(T:$, <�Sq$T�h(�OdqsҰP;* 0�<asr!P) <p#L`r{(V14 - {laSSh��  8  \�rs"V13(-`#~QS��\1 8<b�ir� \14 ,$cnq{d� = `m|`wr%V76 ,$gxisw`\3�(gl�s3�T4��� c�iss |1�`9!cm�ua �20 l �,cSb�U�1`&ieS]dyp'��sdE}Wf|n\dok.pA2Mte3�ez(R )W�cdebn$]28cn,sf rmqtIlm
!, t0`$t-�,��p<�\#!,2W0�(\1TL2V� ,0�/0lT9!-`r;(-)t3�$`T9 &� T1�  p6 ,�T����b\154*t,$\96B, �19�<   �2�$, �21x w�lapI�u):�"fe}qL Th�cNAs��R> ;lh�# Ѐ$�i��sr P0
,cii3�%T�(l0clf� S2 
 clqss"V3(,1cLjs0 Tt �0'|ps7�U- ,$cmaqS�Tv""0�haq5 ]w(.�A%11z!T0| bma�\9"&%Cmp7S!TA� -$c(Agc V�1 ,$Cwi�j!V12�l0�,!Ws$�5(+�cLa�w p14`4 a�c[3��(h�`a�r f0r".8c,Irc ]=� -0o<i�# �q9 d qla�q t1(>"cl!UU �0 eecN`p} t(!	yeS_t{`%`-g�ms}_fuNx}�nteb~|'w�us`V$�W;ddbf"V>:*�-^y��fk�ati�g3)
 \ �l$T<",�Tq (U#!<"P4() \7d4)Y60���b,P{(<�P9$l =1``< t1�@$ P00 <�93 <$�0,*, t=5 ("T1<D."�?!, Pq8"l(U1) ,"�0�,�t2�� gwos|�t�matepc!;oJ�tep\cte8a�q[90S 0RjAs�LT(,�la1� up#,*�hA�� \�/�lasc Q2 � #l`sz$t7 , �JC{s T ,0cO#Ss50.qdacc0P6 m '?� X7 ,(cHiss T8 ) ktA{c Tu d�s,a{s*D!00l�!�P�STq5�
#|Asy\92�,0cl rc!t1�,0c|gb� W�,24�Cme�+8Pq=)&CnaVs(T5v1���iss"T17b(0�l@ss$T1�!,hclQ�s�]1-�!3,�cwh�8(� �lE{�(tr5*:�.�w��mqav*s_}e|Oetn_`o}lveZ_tM3�eR)�+�_sdacL Ts
ag�{tolatind.-%`�4bnlU!�v(|21� 63,u00�0�& � P6  N5!`\0 ,@�1" 4�0 l T��:- Tr2�, T01f.*V�t1, <5t�,!X!v , P!73� d18�,!��9 $ T20(0\21��"�+!{<�tgi�(!tM�G<�vs`Z, �\aws�U�8##h!21`A�% �c�qs;4@#. chASg L�  c,ak!0T(} #�h3w&D�!( slb0w$t`<!g�ass"t�� eGaKs Lw2l!glks3`T8$4c$e�sa8!�!�tcss L;0!�Poes�dP31: g]iu*U�3 ."#NA;r"V3 �$rHc4�1L( algSc FA�", 7h#yr(\06`�`�D!vs P�y,cl�3�"T}9 i8+l�t[��!9(, �a)�"T22d�0a,`zr2}2=�>�}g{�4yp%`is{lm�u._p_zn4e2}UesueVi7bVA�ekl��:c�3p vn,q�*<u:� P40�1QA ,)6�< \ , U5 ,"u ,3T>��h��"�!L �$\9 $ U�p ,$1�!,!Xq2 $(13",0]Qt0(!@3=(�aL1>dn d17!(`dQ<`~UT79�(Pv04, Ur9 n..�0[Ons-,�
de]Pn%�- 5clas1"[,`c�asr P�(�#h��s T0 <����3s T1!- 3Lar3 S �lc�{ �; ,0sHqs�@�<`(�sl!zr$T50,�cl#WzZ�$ cLbs2dtd ,,2}d[[ 48 . IlessaT9!,$,rs T10 . k�qr us2(.A�lE{s@U9> ,bco�2s Q13$, sMIwq(u54j<khac3�V��0(�CL`�P T1�+clqss D16 , clavs U1< � rhac{�t9��. �$cS�"tRpa,,g,acy ��)1mKqe�[t�z0mwmeMOny<_Bg9&tyRpu5vwr($ __c@a�n�U;*i�zR� re�a5ilm*-* Q2 <`\1�(2R3- V3 hT<4/�\5$(%4!�71��Ppl0< n(D$;$h Vb|0< y), T�3 ,P4./#W!� <!R36P-"uQ70,T10($�9,�2� ,�T#1 �./, 7-oc�i�$�
um}4yatm)<c�-[j , �,ps�T | c| �q(ĺ�u*cleby V1 /%s\aR)�: i a,!gvP�`mbcd�r"T�lcL)sw"�4 0#eUss$P& en@�Yp?! al�s3�v?�m CxaRs`@9"h2c$�cS 160� aoaAs�\1w�,"cNa{3 D0r`)pgnq3s0�q�$5`clacs"U34 ,s�!Cq6T1u4N�Eh#yraT{d , *xasBDU13$<"�lSws,�9 ,hC.acQ�t18�(8kdqsr`u�0$�qc
asS 2 ?�
yewqx4e0i�\M��f}V_0�a&fts}�drucnlC"(vVc�e��!P:8#cmosuhv}euui(e�)	=F�(,$T� � d(!,(T~8- $  �b\0 ,PT3�85T8 d Vh, Q0$,T�1`$ �52 $ �s? "5D90,�j5�5�,(T12> |!7!,`!y%,4Uq8,,$�38dd"21!�.("+os�`dNa4a|d)J#enli`>5m]0lav` >�la�C0R.0{]�ss<T ,"C|gwS%V�,(slisb`81`, An!W5�U� (!�ma{s }2`�,#dass 4 ,"il!wS"`� ( �|i�qjX0!s�AS{`e?2,:2las3`\8 , ��{� T; ,s$eqc4`!,!el1cst�(!class$U3 $"dASr �# -$a~e[s!T�6*l ,c3bX3� l!clAq{ 3$�shqsc.T)4 -@3���Q!U(!` "|1�__9) ,"sl`2�T2  , g<cc3 F�1 �bcl��w( 2r0�N*sg[O||0e ys��mm^ntt[�k(�dDr]pmwt's(`�R2�kco~3T"fobatidg&j(P�"�(U ,0UR�<�Գ$,%� , 5�k 61� D3�> V9 �`D),"U4$.jn#1  T1��($T1 ,14$$$T1u`,q56�, T170- \? <0T33 l D2:2,UrB0N2R)i
U�t�Plq�u `<as2 R(c<ns�`u � cl`sp(Tq1,(c�%s�$dq l!c�`qs(P"< sxh�'$ƫ�d(rl%b{!T$0h s�s7"�5`,$g,a&s D<$� alaUs T3�n0gLss2�-",!#duSs Pq"-@lp3[2\90 � fh�S� ҹq  4cNcSdhT125$�ilqyqdU�3#$ Cle{s*T1  /!claaw(9g$,�'|`wr�U9� < bn�s�p@1p�`Cla{hQ $-*cgAq{)T3a<+#\ass'421%(fli�S t2  ,hgL�1s T13(&9%s�Ty�a�ks^�YFenWpal|ar_d-p�eR*� ,j(�'nst v�hawil%*::`T1� T1 `�E2��`Vs 8,P|�, 5
#$�: ,V7b, }h`!u1� D0�l P1q&8(\q80�`q; l T54$,,!5($�17`^ T�7`$ 1� ,T1� ���"�!, T�3 ,"d83��"nsv);(t�e�leTg�<k�esr �ic�axR Ta< �l@qS U0|, al!k P5#x�cla{s �2�. S,3sob7">!c\as7�U5(,dcl0sg5T1`, ��`�'�43�� c$cg{���,(cda{3 T:"- #lQ3S�D9$�0qlkss T00$�$�,cs�tV;� ( #li�3 T1#�>�CM�cs T sb,�CisszaT4 $ #OE;7 15 $$�.rs0�!6 -!K�q1s`T!<< ��'�3y
P �L�SS!p;9( gbKgS�t0(,�hobs �10!�ma� T"��Mytstype iQ_)�|vufOx�io�e2_�e;��s � $T�
cOnrx v�nu��d:	(�\2`0�10< T2!, ; ,&Td0� |7��E6�, T7 $3T8`j �99�&R70 � T�3"$$Qr ,`T1Q$,(p14 , �37 = 4q>r� �W$)&3: $`�1y(d,|22 =(T2! $e�2r)lv~,khSdg��mUE):la�dp�kyAs 2, Bfa�s Tb  K$�s"�00��zla{3"�1�%!c�]w�V2 � c�@ss(V�",8cmEs�4lv`��c�Qss("�%g))r7!��l(c�q�0T' j af�Sw(�<p,8cl�ws&R��,`cl�Q2 U�d�c|yw{�3�|!glar4�"6 ,"flas;(|qs4� #lGe�a!0 `/liqs Ua2#H"bleS� P76 ,knasp$T072l {�agw"T�;a� �lbwc�d=)*,"b�i�s T005%�kha�W�T2{a| qlqq U2: �y$j[t{�w$io�Meo_nU�_tOhLTebteS4e8R�(U�:;gn��t(pmfa�Al`*!-!T (&�U1 � Trq-8�z"n#UT ,1�,m q6@)!T5�,,l�d T� , t10�,Tq1 D!V126.26A1 , \1 l �50�P5 =4\17!-$ĵ9 ,8vq9f,<Т 4 M31�~ar	�adfs6 6O`AtIne!����)f�fE6.BGO�\ODDNO_EMLKP@s_	\FE`Cw]E3YFG�J-e}poidG$a,q{w , gl�R{ P m sMaks0�1�$	al1;�\� .0b\awS T22,`ameqs0t3( �hA�3�0�� glacK�V�, bpAsw 61&akha3w T?'� kd`3T9 )�M�a3s�9"� Cla#s qp ,�K�d�t`T1#0-!sMasq ]Q: m cla_w0\13 - Cl�rR)P0�(,Smars"D15#.(gl��7.4! "h�C� t16 $Ch1s T�8`, b�Qr Tq)�, �m�s!M"P ��S()sqat01 ,$aM!3� 22 nKqg�_t�Pe�o�mom[D�oO2Oin|@v�v_��4(R()X:rboj{e$~olauh$$n{
0Tp!#�18��U3 �z3 ,Vt"�(U� b.tvଠշr$$Z[ $"L-�!]90d< T0/(16 $p��(!P92.0U�58|�P1>h. U�7 ,0W1�, 5p!d�T30+�e21 .b\"'>/	);	ueQDcde~cLi3��R��bla�{)*, cl�sk P�,,�a�`�#0T� .$cl#cs TV �${fass �0,��|c�s t<�~,���s} T!%Clabs \�`L �daB~ T   s��q!� , c$�sCDu�8<b�laWs0E18, k�#7s"İ!`phl`su�d86 /�glcssaV3)$lcmesy s6b,�cha�C `95b,!glasqh9�M,clc�r�U�� i(�Luy"t1�`( c}�sS T;Y`,$�hp{s px!.#$qs{ T3�&h0c(aS�`\�!:ZYEcOd;0e �suG}Wgu�vo�n%yr��eSwe�!�@�R?*.bonst�ron�umHo*)�m�t1!>h 4 d2\;(� Dt(( Q4$,%46`< v1((`48!#T1"<"\0 ,#1x�!t�2 ,�12(!?0`�`1�$(�\1�,,+X4?&, 0:0�0TY9 &\!3�/!T 1!,�30!�.�)(#GNBL)7=

taip ede <one#s,$";hawcd\!14b�i+Qb�A", Blab2 1$( Dlu3s6 , cawk0T*!.qs|�qc,T*l`smQsr`�4 (al`tqbT6`$ cy�s� �7`,�chAqs0:�, cmc3s%09(m0w$ess$�!  ,"Bnas�T100, c,cs9`T{  s|ag�@U��n�#�kc# Fp < Sha2s ]1)   cn`ks 17 $c.Css&�17 m{\yqvdT2x8/ c, s Ty@l wnQ's Tpx0$#nAsq p21(l+ hasc 22 k e�_�q`E5YzWmih]funO0wYnp%A^4esTt0 R ,T8�*ky�sp&v-LmTyne*9� T�1$!U�$, T2(%`#( T4 < Tu - P6l�U70. P9(�(\1�$ Ds0�l |�1) Ve2��Գ� $ �1t ,"D�u ( p54$,!16 ,pa81� T11� "0$�W0��= l�0 .�.$vol�T+h�(stg-�,%we >cmC#S B,budasw$Uql c~cKsQ,Pamk�1`T�!4!h,aw3�\2�pblas2 T#0lbc,mrsbV&)e q�is`\0� q-asS(�7-(�? ���P; ,BSmaPs 8 ,�a,a�3qP1 , clg#�\14 � c$`{� Tu1�,d#�aqc�Tp3< Cm`qs#T��$.!+hpss �t�d`�nds� S0�#giawq P16 %1�law�T�/1$ cLa�s4\(�d@kiA3� �1��.`3hCcc!T�0�, cla�3\49 , C�a{q`Vs:c%/
xmC_w{te`#sZicegeG�XnkodErWuE�tdz(r *W::*a/fut!t�nat�lT*	i t8�* d l T0�( W�q)14 �`� 02Fr0 T l p00�Vy(,l�)0 , \q!,0\�: "?7`,  t`, TY5 ,(U v ,!P�2 , s84, Z=9�>�;0�<$T:8�,"T2�y>�z((/ls}`vonadI|m)�F!`�d�f�
!KVe%d BOMZLO=\^TEZ[OR[GU�_[XS:'
pAit�i|/ ~kmassZ, 'n!wq �1,;#$A`s&Vx�<�jda!w�j$> 0lma+ T21. So!�b!P#`d,emur3$ � "�0rs%�� , amY�s�ն!,$ala3r(h7$ c�e{Ut2"L cciCq -�D�+,e�q$0h� claSR$�'20�`class <10$ c<`V) T3 ,�KlAssb4 ,!,hG3�Ds�i(s`!s3�W122�kl�cS ]aQ`,�A�As1T19 ,(cLqss�T1q �acm`sc`V0�-#l�_s<t�� hcheqq \22�M�Grv)`u"cs�}u�jf�rkenuG�}gs~ezxV�(W_s�dcAnH(T:j*�{Nct$vol5h,e*)* tp2? U0�L�\r  \3 ,&�<�,AT5fn0\� ��v� -2T8`< E;@,$@1�t$ 4�9" U1 �T�3-�TI6 .`�1#�lV8�0, �76 ,"�p"((Tp9 80T00!lD0. T+�!4�-M
Tamr�`te�<cl�u[,�e�cfa9s�D4<!cv`g3�U1  nh�q3!�d� clavv T2 %!s�iKs փ �)ah�Sv$�4((c:`�1�P7 (k�qss  6 �CLi�s1P= ,�clc3�b�8 ,�gn1rsT5�Psl+�w `%0`8 q<As{ v13 .$cfqwz112$"cl�s2lP1s0, f^asc$Q1 n`cl�xq	T4$l�lass tp~ <�neww��q� ��BhI�s D1: �cLaqclPQ9�8c��S Tp�a,$!lC<c ^v�< (lAq2�vb>	
kes_T{bM#(w_mco_f}n`.�bd�2ves�ER(rb(^_sudk4le \:�(Km�c` 6oL�5i&�+)�!s18})D;  \s ��\3dl T4 ,!T1 - ]6`,(*`T8d(`D9 8)P1 ,`U1� �@12 lsT12�x"�4"�(t10,t�7 d$T27�|`T18$,"P1�fl V;$!l�p21�%�T"2)"WnSt):�M
5emtmAtm 42ees�Z�5IFecs�D�� �ibsKi0 ($bdusw$�.2c401w"Ti�̡clar�$�{$,cc,5��$0- !l`�R u5`$)bmQss@2$��c�!ss$�� �8adi�q��8(,(clisr!4- ,(AN`�$v382$1#,�ws`U�9�-)b�as{�T1r#<!Ohu�)�E�l,!c,as3&t � , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24));

template <class R, class T ihsm"sS�T0B<K�irq@U1 .'#Ask!\� �rdqsr%T`�i #,�3� t "6Chia�t ,fla7`\�!� aL3�q<U� �zb}�s�1h /�$~,��I9 , `|esw0tqp�sle#c V3�4l �n��3P3:"nlCDcQr T2�<�c�`:s T3< �3dess \q5�, *,s�d"d8v, W��sw�|Q 8:ca�[lR9 .�gdAss��G9)��c(Acw&]80�Uda�C W3q�,!KxwP� d2�`,"aLar2$�<2�p,e{� T30!:=�r��;xe ks�mE}]fr,�~z|-�"[tgqqr*r (_]stg�H|�;>*kon�r1�f(b`��d#:*��0 l D�p,�4" $4T"8%�0(�(v5 ,0^v8�mq�% Q= $��y�B�1�aN�0 dT8�v(]1a �$V1`, R�7.,T�2"(`Y8�48 @1<)< d� 5PS A,�ur9 �bp�:4,0�2Z,� Ur7�*cO�wv��d5ph4% 8CI`wq#�,�clccqU�,1sl��q'�q l1�`� E,�cya�s&l6 ,pi(QYs(63`=4Ai!q;0Vp2, @-mQ60P5�-isnesR(T4� �l3sq D�L,c|G2a (#@�n�s{�T9�,0Rla�s�T18 l1c,qss�P93�l!#,a�k ^��"-
g�syg�U51�)!c��I{)@< .dawA V 7�fKXt�z P#= &�\+'1uY(�l �zary P!j ,0K0e�s U9 �(blwv{ :0$ �$!zchP�3�& &n�Sg0՚0��pl���(t�#,$ol`1�#T�q(�$yeSF�q�a�Ks^�MGWf]*[x��f$gctgru�vxS>L[c�B`q,��::(a���<@f?�a�)|d:) V� .��3$,#T2!$T' $'V�,$ 
��d�$70, \!5��00�(T1� l&T1!,T5"�&�#��"D5$�$$t%�",`T5�3-|�1�=pT�(�Yx9#. �p 40p; <aT3*,, 23@�^� * Vodat�nA;
t�vduve c|Iz30�-�#lA20T` �IaS �$"( olm{s�T! 6�ala�r�^6� �ikS+�%"�� isk T$4%0g|psr�EEp,`#masc�T~ �.�n�sq�vf|@CfA7c Q<�<8k�q*{ T�(%�G8ay� = !� ",!s�$!` B]��c6�y2 ,0k�I1�(T:Z ,&�LcCs ��6!-�hn!SS$VY%(<�]gS�Ps6p�`!OqwЀT%2�lpclE{r T�( 	cl!wk�P5�!- G~%�7!�: ,"��yVy v0%0�sbmm�3 t6  Cm!{�(tS&� O�s ~r��>
s)r���pa2k�Uodmf�rO�.inttvMvaw5ax�R78_]3n`��ia&T?�*wo's�a�W�#6yhG+� d4&l\�t(�b%$T3� pb�,!R=$�" `-(�@,@\(<&T�< T11 L �1p)$ S3�"4$t13H,(T6f�hQ5�(d \1�(,�T51 ( T18�L&W!;�,$Ls*@, T:1 l ܠ'� T�0� Ѳ�!Mvsp Voni�+ldi;�
6-�tlAY=a-"fa2sT-<cnS�w�%8 grSkc �!, 3l�#aG,- G>qqK U�@�.Gli�w �3�T!aa�Q \5h(!+|aq� 7�|!C,aq{`Ll� !jm�s�d�$<�ced��(|x`l!cnas`D9!>(g�sZQT�8 hB]Ls�N0 %9i�as�Px bc,kr;2T�2 l@jL�{c!V4= ,*cmbS� xp)�s�`swbD&#�� ���q#���, �c^!g~ D1�"(�al�b)T1%�$�"�Css�\T%"{���b$T2 /`s�essvD?"�ct ��$P3 ���las3�U�$0$
=)s�t{��"-1_-ee_gu.Vqoj�%r>TaS��l�$(_?wtlAa}�2�*bq�st&vo yeidu*�&�a��!!$�d$ ,�V;`e$�r(|�T�?qD�  �{z<"8�<`U9 ~Z80hl1	/0 =8T��@1r@- a1�":=(,(Lp $bT1`|hV08�,�4uI"2Ur  �AD(�$V22.m,^2� ,A�t5.�>�z>���ioQk�u��!Is{ P,c|erPP�Arles{ V3�<x�g�o�9�-pc|CC3 42$	$�l9{�`; �id�W2!l� -,ch�0r 3�<"cL`P` T��.1�laQs0^?	,2K|j[ �&cl��w \�8- QNeg]!P0�\&C�Iss"t�5! w��r' �1r2,c| t�,Ph<!gm�Yw�Pq0><�|q�+(d1'��yFmisr$�v2=,�``sw T!6m kl}s6�L�"cl!sc"�;1�& ch��r!r���, c-a�s@�<#"$4f(s;w�1 � u(cL!cs8�w3�$!�yy{3��;�b��eSQ�xa n{OM�o\f�gI.tAzYr�;vqyl� 		^;p�Ql@88:.aC�344r_LEl�}f)!�cr�0,(t�2(�!dw�3a.�Tt"9�,(�0T0( 7(-@V:.�t�hmbD0
!� 11��W�{ ,U�2�� e4 �aY1� .`t34pl T3(.(p54 	(T)8b`2V),$14� ]22a Tb�	!�27 \f,�CoGsV:qJ*~E�~�at� <�lqS[ �5�AlIs{ U < c�`[s�T0 $!�lak��R1(m�sxe�S`T�)�$��a{sa}+ .�lawa V�&�cNAvs(|uBn�W !, �li�S P|`c-or; T�p<esl@�?bTw@< !.`oR`�!0(h`A�c�r V;� -0��!���P!���$a�cF#&|5" �#car�t14$�b|!�CbP�_ l$O*xq�)D%v!`c�q�ga[vG-"�[aq38�=8-0�|�3C�V�=2-<`�!Oc"�222�*'la1s U:1"l #n�3�|0#� �|�72Q462x,!sl�2r t2006.xe#]uypw I�/AEi�F4n4�ml4e�;4awd}s-|((��tl�A(��?*�o�3t R7hvhlin9	*|�< V1�P2(L`T;$/"1.T�(�`X&4nU`�iV9 �!�)dh"L38 ( �Aq*T$2"$.|=�!� TQ4�58]�4�>$U�6�=`F;�2��i D190=%Tw50Lq�1`,`;0 .��:!�.�V�6 ".n+LVfqtil1(��-�t*mPDgle�<#meSc!^d �l`z3pV *`�lAp���"6�khASs�\1 .unHs.\bK�a��c; �2&-Cln]s(P$]&cMrsqt� kw��s$P�at"`Lir3d�=0	c|!w{�P,�!`#l"p�$�*( co��qD\02 0�~b}7�"#p& ls3(T92 '�HI�!\0v`.�su�rb"@�`!2c��rs`a�`�-lcvSd3=%� `�Iw; \1& ,�gh�Ww�p9(!Ȥk�c�2&�a[�ahegs\�6(< c-�eS T@8 j�*%s}~�B  9(�QsC8T33",�< wr@S,�}k(y�ss�zpl0�sOm�]bw�_q/�ovd[_�-?�er k (]85@gg	o�t�kkolJt�v3ta��Mw�y( T0�,��%!T�@8 �3",$6ph E< **r4$ Y=e, V8". 9,$&T!4�)iP3u  D� -�T;3, V�$%0V;e L 7;V�n�up� ,�t1P!,�T�Y !x00!< T�0 /�T#%,�Drk�2:t�hn�a|�{�d��lata}-	;�

#io~�g�oOQ\AmDKTi�\t%	5il�sq�R$Pi`abc F  a�pg0\�,bctD{ �1%F`�(azb`P�3� bnjq1$P��(���qc���4 �"O,ezw d�"(al��5 T � c,�Cs0�$%G*yp�	D$1$ bo�s� U{ LE-�Sq09�,(a,�s� D!3�-�)l`rs	s� .��na1s!V=4&am'r�45<(#��v�$4$(h@lq�� T�7  �cl%sy Q%? $ G�e�U#��:!%$�la2a�pya�sly�s �3p$� (�yz,V*1�<`AiprSrt2zd=jlAW{ V�C� bmA#s!T�6	
}3�zxe0krMd}Kf5^�p�inA'~>}cad�S((�_faW~k}e�8P;�mN{�`�~la�i��j*(#�4<��1!   -%tw5< P�epT%"- V&�4h�%�.�28� \oHv10"$!�18,�X*:�L1�$.!l�$!,`Q�40,!P�4*l T$ <��34�lP11*, 0�t*h27�"C20��2�8.(T2$*I	�UfI�awg`�gLI;s �,$�ass Ti `�msR	�0!	�Hqq`%2,�s|�+s U##�q&MasrT�r,(g�cbr.T0 ,#c,ii}1\7&� o�s vfb�*s�c#s`Է` 0c��s3`uh�p$�,abw0T)0)$#i`�[wY10.`��esT�1<,!B�i�s�B12`O�icgd\=;�>(�ia#v%Tq�@, c�i3s-\�!,`h�s @96(- aB�330pwD,�ah!qbcw�:4,0c<Ajj@Tq?�oa�avrH\�8$�4g`is 0�`.'!n�schDz2 !hlass��7�8 �Tq�2���=rayq_tqh�"ar]-Um�f?.�4~Ij<e1^da3ve) ._�v�1}sam0 Dzp�coNs< �/lgIlej(`TP /�T�*,�D�2,�t�P, 5�L Y5h-!6 $�Pb�p5 6- Lqj,�p1*%�s�!�t0�1"d��1sa-)^3 ,`T!=6.&�6
4�1?0*^:�T1	!(�20� P8nb&2 (`Pre,(U�j wG~1$+:J]�"d}pnAGu�6"naa1-r�h!��Sp �A�&ajaW3f\4 ,�#laqp��1 $"f�`3�F0�cle_z8��id$aeAqs�u� =cwL5T#�40,(�-asq �4�. c?�W�(|&"<N+n�q3��8 ,"cnAS} &y"/2�a7:P1� �D�$`3&P9!=��:p�{ P�3`, c(qgs t1�.�Ah�� %�$ b�!z$E�7%l�b�ss,�! �i{-c&s�\p40xhssfU	.(,rdA�_ �)9hL b`e�3U2:< b�b{s v�1$l0k|!s�"�2v &h3lck`��" .�adawh\4�m9�q_}�p�p*s�O��{ftk�$|��!{S`!QdushV0(_[�Astke,l T+�$y%�w�.�7x�<alMk  t0$-$�0((�P*( �+!�$6$� = ,�46(&b�$(,(T ,��b7�|1 0"T1�4J8".�EqB0(��<!�(U9"((\:8�T%�`Vsx�l\87 � $�c|0ti.d�lrH�t07h�T4) fo<�t1�-)!/�tDmplcT<�t"|'�s"r.pcass"|(<0n'�[.�!, gls�[1�2 .`��`#r ԕ&,`cl�sg�<#"$2f-s{w!04�r),I3c`ܵ`%Wn�s{+R�m�s�!7r D� clg{O�<(� cmtuS �
((`�,s}l� la�MssP\19". c�!s U1V(�`c-a�s0�76(4�sN`�R!rw�`a�lbB[3�(<�<4ahsp"$.!c�a�ken4(-�c9qs�5�i((R<�2�T%$�cia�s tv0 | #\Asz \252)+d)rb tr ,,alCcr�/3 l Slaq�U�49>
h�_uqpG8aQOe%_V��s`�#n�erW\e�u�P`[ hY&q3t�`ln�T+.c�nqf��{Jt�~ig�$T�)�$Բ (1@)."� $ @46�&�5&RT6(.pT <#�<!1	,�t)� ,p\bl"F00d�P9# , �=`"v$|1%*8.D1�",(rs�6�T0~h� E1��(�ޢ0 ���21�&r: , �"2�- �24)$sg�r� �OL`�MnE-
Z��e'ql@tg0=�la{v (�;`r2��,,2a,���"Tp2��.}ar3N)"� #��{# W2 %}tgss'V;�,$+NaS� �4�$ s>fr{ E=��2s�iqq2T4",(!xe{s2T�,`Eh�r2 T4�, 3l�; T`$}laS��T)�  ��r}s�u�9`,2jsz Q'6!. C�ysS ]1�(,hCmacu#t11.${�i�rD5%0-`�iss �3� l@#n2{s(t�C  kV`sc|y<�%�ClA3�1\;�`�pb}�S�0H"1;�$cl��1(P!1 , cleqa P�1 ,(gli3sb�4y � �n�3qbTzf(Z,"$rWT|�t�i�^o}`]'|o_\;klqe0_ta�4d2"R2,o�aSt�E��bV�z*aGr�| 2kLuhxg.m`S� ��F9"� ;.$L(8P4, U`lrt�`,z7��"$0�gpv8m"Vd�l(HM91 <i�6�)h3$� �, $!V��0lhT13$<�V2?$�"F2<`( V19#,�T32&�X:� -,Tvb��8T3 *`Գ4!:o�/)M*�pe�<lctwdrhes3 �,a9,a3b`��,!gTg�38.1 �j�b�"3 @A1+�kh%vz�t(�ceee �. c�(2s,\� bh�w0t8,(s.aC�07 ]`Gl�qs T�b!�r4dr�#T<�D c~�ss �8fs�!�0t1) , '(Cw'1� �`enAsK �02p,��Ew�y T12�,��LeK7 �a8 � fle2spX0n*+la5v X9w),bc&ss)!?#$4�(isse8`0�Cm�r; Tp)
�BaeqW{`TB # �n��s�R2� 8Xkl�s�@T2h) #|!r� \s�p)#l�{s`ܪ0!>M�;Yg�Uqp�)�w��i_c}._r�	mtEq}v�w�f
R4~vcu^a�LT8
#A-�s|�V%xaVYnc"/ 	0t�p0E1(�2"~d]3 < oF@�"T="/ �7�& V` $u��(�ޡ`,�Ű6 �"\!y8$ T�2 �`T� -$V5� � �0�EV4/	(8и�`&35x"40�!9b<D] �9 t2��, R0"���32�!�:< ..O("�d.��(/
-
%E}pnaqe"�lq:W R� �|�6r14&(8Ala��P�(&0;e`wr@9!-!wlG�7 Ub�v a$%�c$6�.cmai3$|4 ��mdcs ��~,c�a�`U"0: rlqsbuA&"%{fC�]!�( m@#daq�  . k,aGrD0r m`lis30�3� ,A"Ns[s d�  +�drc$~y?*%�lAs� \;�p�pbM�S��x05�$SL��1)P!60,4g|eup P�|(gji2sb�5x �%�n�3y�yk,L #$sw!T�08)�rnySS�\2�*!m�aq Q�0 ,#s�e*cT! ��nq�{`P30(>�MvJTYr/�MrK}a��f=n�8/)\Td~]`)zP�T,R�__gq�taK8w �:."�gv3t o,d�ipL�8!Ui�41`,6�<!�+($!F6�}]= *$�p.8�"*b^P  W9!,(\1&�\� -0tr2�0U�3 *`��t!*a��7 l U�r�,D37&l V95�( �1q+,ht"p(�`q�&�\:3��*�� $�@C*�.*-f~O<�p)m!a/�
DAnpj�<' <n�c#`S(�_H`C{ ".`C�1rw UD,�aj!q�au�"$,r�3Wj�T"/�cag�wdV:� j�tWq)$ /(�Hawc"�4!lcL`Js(T0p,��g�y � � �@�
%T4a8 El`c� Tx((QH�js;�46Y<a!lbs2bU)0$�s�q�9%P1%0 c@�Ss&T13�, oAus`V9d@ c�@�s`p`�2,�c�A{qU�~`#kia3s T�48n�siA's Dx*(� Ne�s�D�14<�cmd�� xra,(cm qs$T97*&�nBSt�:0i�T[,s1,�cl�R1 \"*
q-2_2yPe iQ�mbgWv}5xjoNp�r|asPgr�R0l_M"as�Ca��!P.�)�.lg&g|adi�g*a$Ԡ$,$$�$ � 60�SB$(U*h<�]g l!Dvc�1�'0ipD=.�S84,(�)0B,&�1� ��7`/8t�3H)"�16 �*$17 ,!U96 d Gs�,�|8Q��5� (!20$u0�04 t20*$$429 95\44 �.	c�F2r%v�lEtm�k){M)rodxf��Jl�Mal��n8?�m�[b R4"C~hss`U),(C}yss�\�( aL!ra$�0( n,y3q�R <bclA`phV30�%�leC2Jpx` �IaWS(�5", jlu{s�f>�cli�r�V6E���iwS�("��EIsc 90,`f|pSs�Dp$d c(as� \� �n�9y�3jf<S & #|eS7�T93�4*{DA�i!�0 ,�b$mcs�4= l�g,aZvdѩ w�isS P:?(�I|jZ$�"	pa��s;!�8;$BclMc{0P�T"�lcss�t 87 �h%3�`t22 -0"d�irHͺ0 -)�le3q)P60��m{gpkr�pLq]lem�v._1�cjtoP[dfST%z(\0_7�LM�, ::jc�~s�"&kh��`!b晽" p!,�p�, D20lV9%� T�(t8m1*`t�`!�T7�-5-1��$�3�&$�aF.�p!%f(�2(m(T%�$ D < *�1,l�T$`) �= D8D98&l�19%$QPV0�-b40�"�66:0�1@"�@)"V�v!/�bJu�,<�tta(8cd!z�AR/!c�`sk)n , cn`Ss ܠ ,�cl�Sq�T���,Awc)Tv $(cndrq P9b*&+`5sQ	t)<b`tsq)t( s�)os"Dr*`S�Cs� [74$ �CsspT: dKc/{S�n�1d�"b�a3st�1�l Kliqs \11�(c�pc u�jdn��~!zs�U9g�$q�i�v��!0aa1+Lc� D51,>�g�EgZPTq>(|],s�44% )�aa�40x "c!or0T�9e`cD�r V68 ,(blBs� :ad�s�`svjD23"��!���p$҃� $�c^!ws D �#.�Ix�2<4ue�h��EgZ�\FWpOkzt��W$u3es s�,_[sDeDn�8<*�-sV!&���4Al%��+| "?HQ#�$"��*, S1"\4&l v� t>(c��<�8< T9 -0��0 �)P1� l&"1-`T71�&�d�� P55�-$t%� <`T1�s-0�1�-pT�Y,$Xr9#.!�20 <0T2 ,hT3.( 24A�MK�[t)[--�%Q)/5u2<�~icq R- `liv3 �$� cL orHP �AcA3s$v#$.ds�a�`T6�=<k�`�s$U�%� jna[� V��!i`a21 T5`m0pLq�U!T<`.!!fc�sxD�"�`�3as;zfB"1nvss �8�)�sjyPS&D1�4($oXas Q�0 , c*a+c�P ���nw�{ P3�,#hIqj1>$bc�a��f1�(.,QFdk]!1$"AM	ss2t�w8c��s' �qp", kn!a�,	`, wi�Xw�Q{0$>0�la�+ d2#��pFlbvr�22=!�`aww@P3l$k�is��=%sO��zu c"Zi��V#so�so)lee�wT�yddr8V!:]_s%d�Lp:Z:bo��t!V^l�1m(e
�l�R�"& @G�x"$nhL�~(�1e-$E �D\4"�$V3%,�V l9p� E94(8&E�0,0tQD(�U35 ,aw�60-03,, Ps7�o!D�7f.HX�8,�01) , T8�@.%Q2� -hDjb !t23p,��w�8r�F4�h��
&E}mtlbde�4rh SY�J.(clpQ8U <ba$sQ(<!*0w�)ks"U1"(`Q�Cs� Z2$ �CsspV;pdHan{S�.�1d� c�a3R)t� �HcLakq U> $�cLc�r!' �`gn��r ^|�(g�Apq�]�`��ihac} T3� ( 'hmw�'�g
]0c,hsS\12�
7,)s{(�1;� Bh@Sbb/4	>$�xacs(P�=b!bB}!!{ lQ6�, jhaQ�1�37&n cls�� ���p/���!q�"\!3,% !�#c�`T�0 -$3d�r� �30�MCla_zxT��`$p#dss0t&3fnD+L#� t2��,	
yd���9@e3�w�/dd^&]oO�j+��b6mp!sez0r )^�ec,P{���r06oh�Tmd��9 �t00�!T7 / Q2(-4t�.�T'�� A5$� D6$�*\va�T8,� �"} �Q  �)~93&,�0<bs ( $(\4��96i T!7�.	T> <0t�: $0v�4 ,$H21 �$�2wA&,{3 ,�E2	(smfcd.�a�IlE;��t�~6]�t�0,cmk�2R��!Hac3 T1- c|qSs�T!`,dcm!sc�U1 �!�n�sq�:f .!7w$P6�,8k�pk{ T�$(�kze}� = )�"|)rs�t.`,dQl s��F7�,PCeq2r4�|*je7�r0(��Lis#(1",*MI)xR�U!� cnp�w\93 � gX�sq2tk, �l!ZC�t14)�sMa{3$0�45�+h`sc"�1V,"b9�r"]1�"(dgta!r2u58`<!Cnc�S,�9<,bcn�{s�V"2 ��basw��V"q -�sl�9cbT2v >9g�!b�u;3<"cl�ss�T2�!>)ص�p� '�iSPO�i[fgj]x�{*u!d�eSteB,p�#dl�JTz;(�Ojre8fm}ftK�u= QPT � v5 �cu�*<(t�"H �T "&�wa�Uv H0�<,�$T1) T9(=`V7"� �i!jl H1� < �� l�\1d,�T�� �a< �17 , Tpx Y@:?((4T18e "q2. +2 ,07�)m0V$0*n ���
*|%i�Cte {dpKq#��olat�2T�,�siaxs�\ 	-hcm!s3 �0.�ri#s Lrj,�r-js�a�g�4a�igv�� <aomm�W Q5$,-g.g�Wf^W4�(n|c}R�$"ayi�t8� blAsrc/ "cjag`D�,!wTi2!(t)B0� "|cwQCV�20�baxas�(0��@|!�M�3q"g$"<!bl�gc%U5��,%gnd�r�B8�Mdek_
T1�9n ae rs�u�,q(rGmA#�&T59(�(cja$�`�2 �,�gj+{`�W)"� cn�zg U12 -9cnas'r�3�,az��$�20>
yDgwt�pe`iqSiem?fu,Ydom~dU�/pEc�fr  �Lbd�+L`T/8{a}>s��ol�tIl�;	#�1�< T0jT� ib.( �4$D ]�H X6!$ T7" u* <�t�b( TsP% �y` �V�2dD"V2Sb( �t(\ 1 $.t=�!� dQ7�e4S�8�l"T��-(T3{�,0��!i D2 <!tw10<p�$p.f*) co�q|!�-�O�1a�8lg\c6adtws �,(c�qj{ T�,#�l wg�D4,$ �lp{3b�1(l(fD`2W��2'�hSACsz 1�pjl w7�EpC| ��g{s�7$bglIc:(P�P, �Nass`�w:gl�s'0�00> CmP2c�L0@�q$ek�T10!($#<�63�9! ?b�hEYs$r3�~"y/�scdT13 ,0cfis} q7�h�L`w2`D3�85�clbs�T!2$��bla3c�pe�(,"fndqs U�8 �s,!I3 Pq�!!�Go�s+��o�0�$'�cDQ�($gjM� 4{2$-�e@asB,p�('�ml�SS T38�	*A}gr>pC�9RwoUh_j�m{5m�jt�2|t�7Aj�R b_�ceE�l$;�i/�vt d,!vh}A*/)#�0��ANq !�20t ܣo�]0`0�$��  �D5 � Th . ty <(@+8(,5V98d!Tsr2. 9?,p5� m1Ta1(`T�!� 1w (
�Q9!(!0H$#�R�nl!D�3 � �R: < TXc.`Q26 &&�(w�la+m%iu*�
%lm�}�t�<p�i�s��(s`}ku"� (`'hiw�&�fBdj!q"\i�A00 T0�,h�T!rp T"b#.c,1u�p%P, �lbsw$\ < cNa�c |vf�s�brr(T-<��(���pD��� a�cZ3$|1 ,�'l�qr�T44$,$�d�3�T1�L&diL){s��!"q% emas�$Uyr, '�ssw ��- * #���w T3��+yd"3K!F�6 ��c,!s3 D=0.`c-`[� 9 ��t� 02 \ ge��2 �300� a, s1!Tz5$l�,�Qc��20%$�cLpg� \r1!�ca|�s�6r,�~
�yz=u|q�0hS_5c_f5oO0/.lT-zWV�uT�z(Z@(We�'	D1:*a�j;t0fkmAtlhu+)��� dL"^2J*`d�AlP;�, @$.l4^5� T6�}4S� �$T=���x$-z� 0$��Q91 , D17 m0tqr�AT=d"- V3�0l �1�"�1X�?xnlV2&4T=�<(u�0*- P�(#l6*�, \23�, ]2p2,..�dSl�S��vw�iPAfa�:(#EnnxFcE�q��N�,'$Yfd(MK[P]Q@[IERQt�oL_8w��IcS�"t/* !`"h�,0	l 05)�
v�mq4v9�$�*)Ipc��aTail/m9�vt}�3jxgitgs7t�{tEr&�Xx�)-Jci�|uDg Bk��TSr`�EVPaE�p-�**'vnzv$7+ �K�_4D_��EqVC�SW+B�M�B�
M+� jEnkYx�s)�uq%DET2�I|q�=";-(�CO%sYi�0bGow<=m�5NtkG +�sj/QV[u��DltQHNHR[gW�_CE�]tIN�MZ�TuQl�OINAN�d%Lm*

/-/=p)�`w�yk��*��L�L'D}dmnd �OGrX;QX�J/�4TR)GOSVWrR]FIE�_�U�[EPAMf:!i�uNd9f�K[wGaahLHOn&�F�Obd�pb�l�]!g�Mf_{1e!sd�
v�|a #ueh4cl�s3�W�q�m�sv �!�O��D{PA]OO�]AF)mO�W�FZWTO\nPCY C�]	q_h�UM�PaRAGS*BOR\T�ZROUNP�^(cv`{1 ~)+N	�*$zkvY�w�cs_heE_w��9���|d���4e�f]"&^!(�.*�al�T$5o~e�i�`�	BB�MSPMT[E��LFQA DOR8�OoStOTT�KU~݂,P;),�ݪt7�t�)|e"<k(c�r ��('lc3s T)RLs^�/OIC��<�F
tWPX]C��T�) @�GTv.X@YNU]T�&�MC��#IWT�`DNE�{^PEG�slm�r�+p.�J	$�Y~yse �3^Mu4~un?pn}+nIr_tfs�ES�R (T;2#e�.U0>/|st�r"8jBMBTKT1�F�-ABF3OSh`�Os_Z�MBKnt]Z$�	)As�}z�:�Z�E�hDu{�S,��1iS, AlqssdU0B_�AU_\D;K
EO�UIF�c�o�Y�[gNWvUv- MP<�P:]NU�MP�Og�BEOSP�0__de�lWl�W��T5�~	qq�_W9rM`mzVo-mOfC�X��M.r�0_uUcdlU)0T^*clswp�o-K4L�*-0�C7stNiPE�MZI�pAMK�J_KST[D^�N�-`!Fc�qVmlerm<�9:
�"`goPl ta=kl}sSBV� K�se t B�OS�WR[��DAsg��( MC�wD�CNU^TS9%�+N�XwO5NUl�Pa�T̓-F+Ҕ_�R��JUES�khAcr,T�p:}%�Edy@a*ic�lk_f�jpn)l�R~Gu#tsb(R�862KBO*�tbve�cu�n4( �OO�T_rV�EC�]v R[�Q(�^'Q}P0	_ENWAR�t�i`kOnKu�v?|!��Eg�y	H�#i�L$�' �GMQ�^TloG^IHHRJ-w9VYZG	VE2VI- |W!u�i}q }spacQ�R,�cxaQ3 �CmGSV@P_B/OD��Bl�WO�tP[�W�LDASi!bOCT�P_�^?q�ZDOɨRNW�XD�SvU�Y�V��lhss,/"�	yeQf�r�o[Wtam~dS\0k�^d0u}9�ez�R X:jc#n2\0tkx)uIlA�-jcW^[U-zpoFZ�xcVAOS�BNN[D[Dq�K)��U@G�U� �')'-  �%hme��=cNd�s � sx�]C MJ^�UO:PG LO�a�IWkROoTL�RP�PEQ,�b�C��Q[~d�JR�L*�J/W3RQ_YGEFWR�l�;S S��L�0 s^tyXD qr�?am`qjtohN$}v_uecV�"PP`�V21'g�nA4 �/,atmls(y8B��TN�@��_}��s�]bC&{T~0YNK.hTZ&V)�j(iCofst;;
=e�x�r8e4ocmAr�(R-0�-�sw@
"oKQd�A@COLC[n(V�O�_P�COU�T�Z,�G�sh_Q[�NU��QIRAQ(RONWT|PP�EGULDK$cm�wq �/�>�ys;^f}R"I6We,�v�o�p.yHTgdW�3tms((`P�:jozsd"f�lQt�}թi:�o_STS�X_%z]]JPAReG C�K��_P�X\VDFM)0
\' V`cwy�e)87L�t%x�lqvelb,e�i0R�p,ek� T!@OG�4W�O�eA_K�xBMMrv�^B]]�Er/CINt?x@_QNWg�XM�LU(n_O�VW�RGO��TEr.��b#s!T�tN�ifw~t)rq%�sY�a�[fe/Opo�oQ�VW�aw%%�S��*6�cOQ;� fOnaLi�w*) B�GT@@_eJ�MRMT�K(bOM�{pP_G}TC�<% ^N)�ak-q� r�nutq�7i:�BAcg�la.�
fIv�l.�VCcPUEVWIO�~�]Gc_QKG� ?w ��g�acaN4�N�`/~E�dim�s&us&dph8 LS*"/iuapY+l- chtrI-~A�
t�i}ycug2>cL�Ss�R? C$`cBt!BOATOA3_C�o�aM�R(�oKST}�P�AOYFh!R)8BD�S_�PA.u�_PI��C*F�_YD�Qt]�K�N��(yam#r"�	 v	yw�W�]vO lcmqO]Vz�\ol eph�es�CpHX ~K3~$kslnpwZ*B�nctvv,atilF:� ~j[POP�VTNWM]Dq�I,��CYO�T�<p[c_F\MB,�#)�q�(<e]d�`�a�cx�]S`F*rj��c T! OOsu�DQ[vOmL�KD0��P[Q���FT�-�
eRO	R�E��_`	S!OC	VW/QPORR�C+=NPC��|�7r, >y��p�qe0�s_-dm}unWRm_�&�TC��2d%6�g 8M�3<`ge�z |�:
�o~eD '+�y~=o&*�8bMS3Vzx_INI.PA[AMS�OO�[T_P1WaO�.Es.9;(�zjctkLio-P�!�edhbn3Ss@`�AcOA;� v oO_^W�_A�U]_�F�J_�U��x_CK�TӉ!KKKTLTU^ENuM[�ESQMG(KGS�_x@�o�_�VI�,rnHS""T$0>�e9{�y2u A�\e�=_fm�O0oao�%r4e�d#bV(^_��dw�lh T2:*+-�Yt*^l'�IfE*)��OO[�^_GNWMAR�]G(�cSv�p]C*wL�E&�)1"tO}`6m�m1[�=
ua�P|qe <"|�ww�
( coc�yU(bjO�_pY�#HeG]I *o/{�]p_'�YN�S- nO�S_PRCJ��WqCr�EW8@O�p_�4OBGUNTP%smi�K5)>
��{\t�1}c_L�m�b�*pkK[�rktgsLM�v:�!MweDc�Hl R�:+cml�f4nua�	XeJ9,AB�We_@M�r)ER)r�_VtwPONnTGvW�lQ)� fnNs�(>�|auie ;	�Mwo�led%j,`Naxs1R,��Ms�s � @�Oӵ\�HAgE]A]IFh�MrxPX�J.]�4UP	(DMORTwBQWnE]�E�IMS*GC_KDQ�P_GON�E@cMissa O*�D�dq`�"I��UM},u�]pIajqe;_te�tr�R  /a|dki�z!^?�{�g�st0�oed��,ixa}COOSWPPye^LE�GZQT�(bKOUs�_KvT	UL �t)�$Bh;OK4pt*a4e0,C�mbsvR< a<`wB`� OkSP_P�VBNNMOs�h@��CPO�A�/mGTv9%BM�@�PP�E$Ue_D�R��B[�UT^T][[��DQ,lcrs�Dib~M/Y'�[tq0��is[m4���}F_3�I�lt`4E+v�r(��*/stfCAmt"T3+*�n7< tk��\�%*:BJ_QDw��T�}lY�AZeMY PoOQt}W��IE��S%t�$..(�(;boG�i?m�
�e}d�Ah�yk<c?s�l s4`z(TaN?T_�P_CMG�[HDCGiW?PP]�T�R	 ToJT\�X^%N�M� eRM2hBIm�AWPSLWJor<�e�Sq@V�1>�x�{u�Q�1hk_{�$_&��icinTer_teter�U@x_G#}$cc�|hD�>�o�?qp volC#L&2)�^�|�P_@LWL_�RAmS(BOGS�=_S�ttVt8��.3�~OeApxl)�H
eo�McCe ��Ni{�(, cleYS P�]GS�OPS_s�m�;D�b/B�TwrpMcNL�MI	�|WY�PP[AOM��K(jOOS�}PQ]bj�TR<#�#c{.T) >j9my]p9r'�Iw�Femnen�r�f*bb��dsrg��V h/O�pd�$ln$T~:qo�3x�~w8a|9na:�mb�WW�[H!��U�S��IKK�lcTOPL]�w9]EV�D	 H.) �/3|t�OhtYh�;-JI+.fC�5F4}]AO �uf- �a{�|5tu�>zl�Ss`S�jcN�v T1�N�T7�`EHAKFG)C�o�EG`P_CO�nU2�� �SP]��D��LHP�ES(�OO{T^Pp_W\JBg,5|A{�d8"x6
YE+^d:Q)$�yoi`msRnnQ�Ci�t7r]$d�Ez(r:EUF`s^C�n�!L�:*�o~Rt ��ItIli9)(RGF�PS�^ECum�IAJ��S	JO�SXO�PvA�YGT��xya=;
UJte-Alwlg�gNQw�(rl"]qs�4 gY(�pH�C%@IA[KB)FVST�PEAOT�\FR74jm{po@P�AF|k_P�R�DRnBOS_p��p���QN���,a�gW#$\- <�x�u^�h4-$if�d�m�Fwz�]GenT(z[��cduc Rch{fq{vGYL.ZS88*��-sR!&���<Al&�-�
dSWOR�E��_SAOS	VWQpR�O=NTC��m�$"/>rp)��0q�qlq�eh<bl!yshR< W�%�W`��"O7�}D0M�+IE_�R,\�O[�_P@�C�Y^7+,C�bTW0pWnUI_>AM8BG�]^�HP_COUhT�rC)k?k"|�b%{`sWdxiv!y��%mKf_*_rIi�AewW4�dva6,r<"W�aQ6�a|m�T�z.C�G�hnoK�{��!IBOQDWUP_M|UH�EARAE) Go�T_��o�P�Z~b|6M$at	,�);-�	*t@M�la�24k�a3`S� "l!s�$�BOMb]_��oW�m]A_QN(i�[\^X_C�EfAUP��FOO�TPWDN_	PP�UGS�
COSt�t_3w��TER�ctspM!V+d�YEs}p}i� y�QmaM^<�>�/)dtg��|Eytfr,P�r~]'�3vcgDh {*k�lsB6�HM�m}*ihғZSTW
P[��UA{r�UEQ)C�sG�<PBWVOQ^TE2(H�)~3/lsl ��mavTe�)?-H�u�S�*'taj+�`cwbR(�v)�3`UML�@_pP�OKME�IG(bi�[p@_]TA�9pVoOST�Q[%DFM�IeuS:BNNSUwW�_CO�NtZ<�l,�v$P) ,
8�Svwar� mk_oEl_g|np/��g�_p�R4�b�� �DucpaEllh�::jioWX�*6o�%tIX=-)(BISTUI|UO�]�MRCMS:JOC�V_VTc�ELGQ,U)>$));�B�.tal�ri�e�TclsS@B	!k-ass T�BO�T_ %AOMOI�[
F�_YD�Qt]�KeN��)xCmSVWPR_ELu_^R�RgNS4�nQV]P{�_ns,)�ay�4@`jkek3t�p8a_lE�OfunVxo)npeR[� 3|b{�3�V_&caPoq�� ���hc���| �o^ad}ld(�"B�A[�^0WGF�D��BSY�IBFO_
[X��B.UFDRdt�$j~M=G/�St1:��
Re,���|e ?�m�#r ,!#n�r3��"&KVWPUWDa@�(*OIS��P�G
TAZ	 z��ST�pPS�OT/^Y QeMS.`_�7�]S��#OUf�eV,d�);r!U�2>}�x�_ty�A (�Yuof�~Qg1zjz?pd7!'r_((W�NK�xcalm q:�*G/~0vl�`8`|gj-@LK[_�P�%nAF_pARAl�	�OG�MRBko]^T�,U3�%?.�0�n.E�A�i*�t��IAqm <ceerw4p\p�Easp`6( Go�T]��o�Y�IV.FK3T7PTG�T<X�R*0BO�MT�PWe�D_@A�a\)R�dD^TQlB_��fW�,sEasz()�L
Xs�IrA0h��o-m�vuo_Ponm1hp_�UwT�hS!8�'K3w��ll0�{p:aNnr4$�m0C�i|!?)�B_�QTd\��8aSC��iFMMsr�Vr_�bFr.T) ./O�(a}z3V&�KL�Til%/+�J3�fbjb��D�rg��n t%a�sL�=cbVd!~yw� @�BgT?@P^�Oa�T_�W<+G˗]�R��UQ� FNOI\�p8]EL�OPRAMsj�S]_�BnL�R<C|9s&D�>yUR_d�pg!i�[c�nnt�@n�Fuev�va3�ev(R8�|�tuah t06(#KNwQ"�n�aEild
)�B_S��W�YnUT�AҡLW��S]]�P_koLtA2\\	**;iYuea<ct42=,ea>R=�)mqse R BU�SU�P}SgL�_mG8FNUP]USZW�o�bT�r(�BoG[t�Q�]eKUmqAZAE�(O�R$`p�[GM��S.g�syc�Td0�	�|��xy`})hs�ee_`un�v�	n^qp[|mubUs�vei,�t(�aZlWT`s'n09l�z9,POG�8ZPVV]F5~|BR�IR(BOI�V�P^KMQNp��(��pc���t!�'f|emp�#ta<�� 3w2R� s(�Cs0�LBGOWZ[P�_C]E@_K�9�OOSv_uT_�[T|�) RMM�t�@�W�U{x`�M*�Gs�_$`_!OEO\U6lcob� �)0�Q�s�48Q4$h{\mul�2tnPq;ft%r]`qw|ev(V�,S]c�G"l$4�.,"�{<`volstyle��RM�S[��^5N�m�`RAtS
rnOSD_Qj_C�UN^u]�	(hV/dapo,	;�t�uxduvE$b�is3 �%�clA3 \`@m�CTPZ_DgIoY�!�MQT�Q\_�O�NU�	�2oNS[� R��IS@P@]S(C_}SP�TQ_IGOGR�s|!�w�^�"8
{g^_3p�0e3^�e�[�p._PEilt�>_umSd%z`S�(#`we,`�~(�_��v6�olAUq�d
)*HLJZWT_fK�I��EA�X*B_GW^]XRMUNPEJ,Wyh�gMO;w��n,A�at%(m
F�E1ZMit!5y�Hu�sh$22�d3�*@ CO��u^YPcM�R^Y�"KnWT[ R_c'}L]Q&�K_�_XP~EN�KW�BBIСBCzs��Z@]CO�rT�<,bdew12P-�:�Iu;_T9be(�ws�Um�v}.Эi�r�"�aCQK�(r$n^OK�v+] D/�(A'n@t r�l!ril�*(bh�[pP_uJ_R�UrIBOO�U{pP�CC�^lr�I�,a�OC�tfnYl�t-�<s`aq ( ClgQs�T�KOoCTNQ�_WM��U_�8BMW�а\GL�EZ)�bFowupHULSKA5PI[8MOSP6RPnE�UV�)mqsg V)`�
x�rt]`e�SdqOdtNE3A�~�sL�cs�erPS �W�AdIch1t::"a�j{w�v�eu�mdj�(rMOW�_XD�UFT�[�E��{(C}O[V�Q_GM}^�G�f+Q>*.)0CMv�6	um,�la�B Xa@Qrs F$	2l�sq!T(B�oCUWTy!imA� JJOQ�W�PCNULQ�� ���QW���?e�e_vmS@m�*BOAS�޴wSG�FP�cx�]S L*~�yffUupg�y�Oma_oU.�Soy.�0[Re`�e�(B 8�_�.ui>3E+z�bo��| 4k,cUImu.i)G^�T?x\QS�U�^�RAW(KLMq��P�kNQ�TD2,\(1/n,; V�.�Tk��"+�,dem�h	te�clm�s �/`a�ar�Xj>O.s�@P_3[Zh_IF8JnNS\_PR�MO�JTE) aM�3Y�p]nuIZXaVcIWB\KS5_��CoEX1[j�l�GcU+�,
qo{_y�A A3�mum�f�~u�I��hr_z�%vd��) Kdug|eU8:z�Egs|d6o,af�eu �/�O�\�Zo\JM_4QVW8k�R_PP�HO�E|�U),n/�(0*'j�d*folQdi]ѩk�hAgtjf*�4lnm&�BnKsP��RC�|ERI*xX�D.�KOst�tA_)s\�\e�UQfj