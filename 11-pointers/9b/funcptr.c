#include <stdio.h>

double sum(int a, float b) {
  double result = a + b;
  return result;
}

int main(void) {

  double (*fptr)(int, float) = sum;

  //Method 1 of calling function via function pointer:
  double r1 = (*fptr)(5, 7.5);
  printf("%lf\n", r1);

  //Method 2 of calling function via function pointer:
  double r2 = fptr(5, 8.5);
  printf("%lf\n", r2);

  return 0;
}