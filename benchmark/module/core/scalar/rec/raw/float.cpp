//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2019 Joel FALCOU
  Copyright 2019 Jean-Thierry LAPRESTE

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#include <eve/function/rec.hpp>

#define TYPE()        float
#define FUNCTION()    eve::raw_(eve::rec)
#define SAMPLES(N)    random<T>(N,1.f,1000.f)

#include "bench.hpp"
