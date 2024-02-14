#include <stdio.h>

double test(int a, double b) {
  if (b != 0) {
    return a / b;
  } else {
    return 0;
  }
}

int main(void) {

  double (*p1)(int, double) = test;

  double result = (*p1)(5, 10);
  printf("%lf\n", result);

  double result2 = p1(6, 2);
  printf("%lf\n", result2);

  return 0;
}