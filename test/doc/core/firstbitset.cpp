#include <eve/function/firstbitset.hpp>
#include <eve/wide.hpp>

using wide_it = eve::wide<std::int32_t, eve::fixed<8>>;

int main()
{
  wide_it pi = {-1, -2, -3, 27, 2, 3, 4, 0};

  std::cout << "---- simd" << '\n'
            << "<- pi =                   " << pi << '\n'
            << "-> eve::firstbitset(pi) =        " << eve::firstbitset(pi) << '\n';

  std::int32_t xi = 31;

  std::cout << "---- scalar" << '\n'
            << "<- xi =                          " << xi << '\n'
            << "-> eve::firstbitset(xi) =        " << eve::firstbitset(xi) << '\n';
  return 0;
}
