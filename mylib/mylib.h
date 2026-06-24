#pragma once

#include "mylib_export.h"

class MYLIB_EXPORT Calculator {
public:
  explicit Calculator(int initial = 0);
  int add(int x);
  int value() const;

private:
  int value_;
};

MYLIB_EXPORT int factorial(int n);

MYLIB_DEPRECATED MYLIB_EXPORT int legacy_factorial(int n);

int internal_helper(int n);
