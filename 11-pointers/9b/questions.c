#include <stdio.h>

double foo(int a) {
  return a;
}


int main(void) {

  int a = 10;
  int * p = &a;

  printf("%d", *p);

  const int * p1 = &a;

  int * const p2 = &a;

  const int * const p3 = &a;

  double (*fptr)(int) = foo;
  fptr(5);

  return 0;
}