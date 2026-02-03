#include <stdio.h>

double sum(int a, double b) {
  double result = a + b;
  return result;
}

void foo(int a) {
  printf("%d", a);
}

int main(void) {

  double (*fptr)(int, double) = sum;

  //Bad practice:
  //fptr = foo;

  //Calling sum via fptr - method 1:
  double r1 = (*fptr)(5, 5.0);
  printf("%lf\n", r1);

  //Calling sum via fptr - method 2:
  double r2 = fptr(5, 15.0);
  printf("%lf\n", r2);

  return 0;
}