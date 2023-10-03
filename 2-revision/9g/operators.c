#include <stdio.h>

/*
  Multi
  line
  comment
*/

int main(void) {

  //Mathematical operators
  int a = 5 + 6;
  int b = 8 - 10;
  int c = 10 * 5;
  int d = 10 / 3;
  float e = 10.0 / 3.0;
  int f = 11 % 2;

  //Logical operators
  int a1 = 1 && 0;
  int b2 = 0 || 1;
  int c3 = !1;

  //Comparison operators
  int a2 = 5 > 6;
  int b2 = 5 < 6;
  int c2 = 7 >= 6;
  int d2 = 6 <= 7;
  int e2 = 5 == 7;
  int f2 = 6 != 8;

  //Assignement operators
  int a = 5;
  a += 5;
  a -= 5;
  a++;
  ++a;
  a--;
  --a;
  a *= 5;
  a /= 5;

  int b = 7;
  int c = b++; //c == 7, b == 8
  int d = ++b; //d == 9, b == 9

  return 0;
}