#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of a: %p\n", &a);

  int * p = &a;
  printf("Address of a: %p\n", p);

  //Dereferencing the pointer:
  *p = 17;
  printf("Value of a: %d\n", a);
  //Print the value of the variable to which p points
  printf("Value of a: %d\n", *p);

  int b = 30;
  //Assigning p to point to the variable "b"
  p = &b;
  printf("Value of a: %d\n", *p);

  return 0;
}