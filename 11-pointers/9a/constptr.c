#include <stdio.h>

int main(void) {

  const int a = 15;
  //Not allowed by the compiler;
  //a = 30;

  int a1 = 10;
  int b1 = 20;

  //Pointer to a constant - указател към константа
  const int * p = &a1; 
  //Changing the value of the variable via the pointer is not allowed:
  //*p = 15; 

  //This is allowed
  p = &b1;

  //Constant pointer - Константен указател
  int * const p1 = &a1;

  //This is allowed:
  *p1 = 15;

  //This is not allowed:
  //p1 = &b1;

  //Constant pointer to a constant - константен указател към константа
  const int * const p2 = &a1;

  //Not allowed:
  //*p2 = 15;

  //Not allowed:
  //p2 = b1;

  return 0;
}