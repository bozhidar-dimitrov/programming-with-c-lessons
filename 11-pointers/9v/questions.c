#include <stdio.h>

double foo(int a) {
  return a;
}

int main(void) {

  double (*fptr)(int) = foo;

  int a = 10;

  int * p = &a;
  //Prints the address of the "a" variable
  printf("%p", p);

  int * const p1 = &a;
  *p1 = 15;

  const int * p3 = &a;


  return 0;
}