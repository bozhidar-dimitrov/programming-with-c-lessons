#include <stdio.h>

int main(void) {

  const int a = 10;
  int b = 15;
  //a = 15; throws compiler error

  const int * p = &a;
  p = &b; //Allowed 
  //*p = 15; -> not allowed

  int * const p1 = &b;
  *p1 = 15; //Allowed
  //p1 = &a; -> not allowed

  const int * const p2 = &a;
  // p2 = &b; -> not allowed
  // *p2 = 23; -> not allowed

  return 0;
}