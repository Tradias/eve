//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2018 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef EVE_ARCH_CPU_SPEC_HPP_INCLUDED
#define EVE_ARCH_CPU_SPEC_HPP_INCLUDED

#if !defined(EVE_CURRENT_ABI)
  #define EVE_CURRENT_ABI ::eve::emulated_
  #define EVE_CURRENT_API ::eve::cpu_
  #define EVE_STRICT_EMULATION
#endif

#include <eve/arch/cpu/abi_of.hpp>
#include <eve/arch/cpu/as_register.hpp>

#endif
