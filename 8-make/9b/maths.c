#include "maths.h"

double square(double x) {
  double result = x*x;
  return result;
}

int factoriel(int a) {
  int result = 1;
  for (int i = 1; i <= a; i++) {
    result *= i;
  }
  return result;
}