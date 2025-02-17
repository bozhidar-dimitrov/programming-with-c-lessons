#include <stdio.h>

int main(void) {

  int a = 87;
  printf("The address of the variable a: %p\n", &a);

  int * p = &a;
  printf("The address of the variable a: %p\n", p);

  //Dereferencing the pointer via * operator
  *p = 77;
  printf("The value of a: %d\n", a);
  printf("The value of a: %d\n", *p);

  int b = 10;
  p = &b;

  printf("The value of the variable to which p points: %d\n", *p);

  return 0;
}