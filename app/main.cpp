#include <iostream>

#include "mylib.h"

int main() {
  Calculator calc(10);
  std::cout << "calc.add(5)      = " << calc.add(5) << '\n';
  std::cout << "calc.value()     = " << calc.value() << '\n';
  std::cout << "factorial(5)     = " << factorial(5) << '\n';

  //   warning: 'int legacy_factorial(int)' is deprecated
  std::cout << "legacy_factorial(5) = " << legacy_factorial(5) << '\n';

  // std::cout << internal_helper(1) << '\n';

  return 0;
}
