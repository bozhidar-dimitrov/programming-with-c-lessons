#include <stdio.h>

int main(void) {

  const int a = 15;
  //Gives error:
  //a = 30;

  int b = 30;

  //Pointer to a constant
  const int * p = &a;

  //Not allowed:
  //*p = 40;

  //Alowed:
  p = &b;

  //Constant pointers
  int * const p2 = &b;

  //Allowed
  *p2 = 60;

  //Not allowed:
  //p2 = &a;

  //Very bad practice - changing value of a constant via pointer:
  int *p3 = &a;
  *p3 = 7;
  printf("Changed value of a constant: %d\n", a);

  //Constant pointer to a constant:
  const int * const p4 = &a;

  //Not allowed:
  //*p4 = 77;

  //Not allowed:
  //p4 = &b

  return 0;
}