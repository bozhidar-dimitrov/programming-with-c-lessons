#include "maths.h"

double square(double x) {
  double result = x * x;
  return result;
}

int factoriel(int x) {
  int result = 1;
  for (int i = 2; i <= x; i++) {
    result *= i;
  }
  return result;
}