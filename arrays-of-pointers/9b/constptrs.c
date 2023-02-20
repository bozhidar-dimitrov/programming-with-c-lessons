#include <stdio.h>

int main(void) {

  const int x = 5;
  //x = 10; //Changing values of a constants is forbidden

  int a = 5;
  int b = 6;
  const int * p = &a; //pointer to a constant
  p = &b;
  //*p = 10; //Forbidden -> not allowed

  int * const p2 = &a; //constant pointer
  *p2 = 15;
  //p2 = &b; //Not allowed

  const int * const p3 = &b;
  //*p3 = 15 //Not allowed
  //p3 = &a;

  return 0;
}