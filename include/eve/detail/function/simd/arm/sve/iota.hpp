//==================================================================================================
/*
  EVE - Expressive Vector Engine
  Copyright : EVE Project Contributors
  SPDX-License-Identifier: BSL-1.0
*/
//==================================================================================================
#pragma once

#include <eve/concept/value.hpp>
#include <eve/detail/abi.hpp>
#include <eve/forward.hpp>

namespace eve::detail
{
template<integral_scalar_value T, typename N>
EVE_FORCEINLINE constexpr wide<T, N>
linear_ramp(EVE_SUPPORTS(sve_), as<wide<T, N>> const&) noexcept
requires sve_abi<abi_t<T, N>>
{
  using enum detail::category;
  constexpr auto c = categorize<wide<T,N>>();

       if constexpr( match(c,  int8 ) ) return svindex_s8(0,1);
  else if constexpr( match(c,  int16) ) return svindex_s16(0,1);
  else if constexpr( match(c,  int32) ) return svindex_s32(0,1);
  else if constexpr( match(c,  int64) ) return svindex_s64(0,1);
  else if constexpr( match(c, uint8 ) ) return svindex_u8(0,1);
  else if constexpr( match(c, uint16) ) return svindex_u16(0,1);
  else if constexpr( match(c, uint32) ) return svindex_u32(0,1);
  else if constexpr( match(c, uint64) ) return svindex_u64(0,1);
}
}
