#include <stdio.h>

int main(void) {

  const int a = 7;
  int b = 10;
  //a = 10; -> throws compiler error

  //pointer to a constant
  const int * p = &a;

  p = &b; //Allowed
  //*p = 10; -> throws compiler error

  //constant pointer
  int * const p2 = &b;
  //p2 = &a; -> throws compiler error
  *p2 = 15; //Allowed

  //constant pointer to a constant
  const int * const p3 = &a;

  //*p3 = 10; //throws compiler error
  //p3 = &b; //throws compiler error

  return 0;
}