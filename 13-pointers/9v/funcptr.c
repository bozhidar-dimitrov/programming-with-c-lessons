#include <stdio.h>

double test(int a, double b) {
  if (b != 0) {
    return a / b;
  } else {
    return 0;
  }
}

int main(void) {

  double (*fptr)(int, double) = test;

  double result = (*fptr)(5, 10);
  printf("%lf\n", result);

  //Alternative way to call the function via the function pointer
  double result2 = fptr(6, 3);
  printf("%lf\n", result2);

  return 0;
}