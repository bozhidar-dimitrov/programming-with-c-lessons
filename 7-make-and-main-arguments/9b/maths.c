#include "maths.h"

double square(double x) {
  return x * x;
}

int factoriel(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}