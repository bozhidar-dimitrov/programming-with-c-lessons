#include <stdio.h>

int main(void) {

  const int a = 15;
  //Not allowed:
  //a = 30;

  int a1 = 20;
  int b1 = 30;

  //Pointer to a constant - указател към константа
  const int * p = &a1;

  //Allowed to change the address of p:
  p = &b1;

  //Not allowed:
  //*p = 3;

  int * const p1 = &a1;
  //Allowed:
  *p1 = 15;

  //Not allowed:
  //p1 = &b1;

  const int * const p2 = &a1;
  //Not allowed:
  //*p2 = 15;

  //Not allowed:
  //p2 = &b1;

  return 0;
}