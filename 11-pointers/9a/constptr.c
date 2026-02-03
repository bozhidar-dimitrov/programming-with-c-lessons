#include <stdio.h>

int main(void) {

  const int a = 15;
  int b = 15;
  //Not allowed:
  //a = 50;

  //Normal pointer:
  int * p = &a;
  //Very bad practice - avoid:
  *p = 30;
  printf("%d\n", a);

  //Pointer to a constant
  const int *p1 = &a;

  //Not allowed by the compiler:
  //*p1 = 40;

  //Allowed:
  p1 = &b;

  //Constant pointers
  int * const p2 = &b;

  //This is allowed:
  *p2 = 55;

  //This is not allowed:
  //p2 = &a;

  //Constant pointer to a constant:
  const int * const p3 = &a;

  //Not allowed:
  //*p3 = 77;

  //Not allowed:
  //p3 = &b;

  return 0;
}