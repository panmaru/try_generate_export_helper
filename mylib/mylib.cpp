#include "mylib.h"

int internal_helper(int n) { return n > 0 ? n : 0; }

Calculator::Calculator(int initial) : value_(internal_helper(initial)) {}

int Calculator::add(int x) {
  value_ += x;
  return value_;
}

int Calculator::value() const { return value_; }

int factorial(int n) { return n <= 1 ? 1 : n * factorial(n - 1); }

int legacy_factorial(int n) { return factorial(n); }
