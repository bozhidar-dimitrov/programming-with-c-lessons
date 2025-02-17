#include <stdio.h>

int main(void) {

  const int a = 40;
  //Not allowed:
  //a = 50;

  int a1 = 10;
  int b1 = 20;

  //Pointer to a constant - Указател към константа
  const int * p = &a1;
  p = &b1;

  //Not allowed:
  //*p = 15;

  //Constant pointer - Константен указател
  int * const p1 = &a1;
  //Allowed:
  *p1 = 15;

  //Not allowed:
  //p1 = &b1;

  //Constant pointer to a constant - Константен указател към константа:
  const int * const p2 = &a1;

  //Not allowed:
  //*p2 = 15;

  //Not allowed:
  //p2 = &b1;

  return 0;
}