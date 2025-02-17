#include <stdio.h>

int main(void) {

  int a = 15;
  printf("Address of a: %p\n", &a);

  int * p = &a;
  printf("Address of a via pointer: %p\n", p);

  //* - derefferencing the pointer to change the value of the "a" variable
  *p = 30;

  printf("Value of a: %d\n", a);

  int b = 85;
  //Changing the address stored in the pointer "p"
  p = &b;
  printf("Value of the variable to which p points: %d\n", *p);

  return 0;
}