#include "maths.h"

double square(double a) {
  return a * a;
}

int factoriel(int n) {
  int result = 1;
  
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}