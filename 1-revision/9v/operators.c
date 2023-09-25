#include <stdio.h>

int main(void) {

  //Aritmetic operators
  int a = 5 + 6;
  int b = 5 - 3;
  int c = 2 * 2;
  int d = 9 / 2; //integer division
  float e = 9.0 / 2.0; //real number divison
  int f = 11 % 2; //modulo

  /*
    Multi
    line
    comment
  */

  //Logical operators
  int a1 = 0 && 1;
  int b1 = 1 || 0;
  int c1 = ! 0;

  //Comparison operators
  int a2 = 1 == 2;
  int b2 = 1 >= 3;
  int c2 = 2 <= 5;
  int d2 = 2 != 3;
  int e2 = 3 > 5;
  int f2 = 5 < 3;

  //Assignement operators
  int a3 = 5;
  int b3 = a3++; //b3 == 5, a3 == 6
  int c3 = ++a3; //c3 == 7, a3 == 7
  --a3;
  a3--;
  a3 = a3 + 10;
  a3 += 10;
  a3 -= 10;
  a3 *= 10;
  a3 /= 10;

  return 0;
}