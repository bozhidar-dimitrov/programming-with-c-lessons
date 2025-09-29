#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a = 5;
  int b = a + 6;
  int c = a - 3;
  int d = a * 5;
  int e = a / 2;
  int f = a % 2;

  //Logical operators
  int a1 = 1;
  int b1 = 0;
  int c1 = a && b; //c == 0
  int e1 = a || b; //c == 1;
  int d1 = !b; //d == 1

  //Comparison operators
  int a2 = 5;
  int b2 = 3;

  int c2 = a < b;
  int d2 = a > b;
  int e2 = a == b;
  int f2 = a >= b;
  int g2 = a <= b;
  int h2 = a != b;

  //Assignement operators
  int a3 = 5;
  a3 += 1; //a3 = a3 + 1;
  a3 -= 1; //a3 = a3 - 1;
  a3 *= 2; //a3 = a3 * 2;
  a3 /= 2; //a3 = a3 / 2;
  a3 %= 2; //a3 = a % 2;

  a3++; //a3 = a3 + 1; postfix //suffix
  ++a3; //a3 = a3 + 1; prefix

  int b3 = 1;
  int c3 = b3++;
  printf("B3=%d\n", b3);
  printf("C3=%d\n", c3);

  int d3 = 1;
  int e3 = ++d3;
  printf("d3=%d\n", d3);
  printf("e3=%d\n", e3);

  /*
    This is multiline
    comment
  */

  return 0;
}