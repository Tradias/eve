//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2018 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef EVE_FUNCTION_SIMD_LOAD_HPP_INCLUDED
#define EVE_FUNCTION_SIMD_LOAD_HPP_INCLUDED

#include <eve/function/scalar/load.hpp>
#include <eve/detail/overload.hpp>
#include <eve/detail/abi.hpp>
#include <eve/forward.hpp>
#include <eve/as.hpp>

namespace eve
{
  template<typename T,typename Size, typename ABI>
  EVE_FORCEINLINE auto load(pack<T,Size,ABI>* ptr) noexcept
  {
    return *ptr;
  }

  template<typename T,typename Size>
  EVE_FORCEINLINE auto load(aligned_ptr<T,pack<T,Size>::alignment> ptr) noexcept
  {
    return *ptr;
  }

  template<typename Size, typename T>
  EVE_FORCEINLINE auto load(T* ptr, as_<pack<T,Size>> const&) noexcept
  {
    return pack<T,Size>(ptr);
  }

  template< typename Size, typename T, std::size_t Align
          , typename = std::enable_if_t<(Align >= pack<T,Size>::alignment)>
          >
  EVE_FORCEINLINE auto load(aligned_ptr<T,Align> ptr, as_<pack<T,Size>> const&) noexcept
  {
    return pack<T,Size>(ptr);
  }
}

#endif