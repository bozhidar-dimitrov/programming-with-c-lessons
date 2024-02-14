#include <stdio.h>

int main(void) {

  const int a = 10;
  int b = 20;
  //a = 15; not allowed

  //pointer to a constant
  const int * p1 = &a;
  p1 = &b; //allowed
  //*p1 = 15; not allowed

  //constant pointer
  int * const p2 = &b;
  *p2 = 30; //allowed
  //p2 = &a; //not allowed

  //constant pointer to a constant
  const int * const p3 = &a;
  //p3 = &b; //not allowed
  //*p3 = 7; //not allowed

  return 0;
}