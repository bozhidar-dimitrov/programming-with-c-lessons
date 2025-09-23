#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a1 = 5;
  int b1 = a1 + 7;
  int c1 = a1 - 3;
  int d1 = a1 * 3;
  int e1 = a1 / 2;
  int f1 = a1 % 2;

  //Comparison operators
  int a2 = 10;
  int b2 = 15;
  int c2 = a2 == b2;
  int d2 = a2 != b2;
  int e2 = a2 < b2;
  int f2 = a2 > b2;
  int g2 = a2 <= b2;
  int h2 = a2 >= b2;

  //Logical operators
  int a3 = 0;
  int b3 = 1;
  int c3 = a3 && b3;
  int d3 = a3 || b3;
  int e3 = !b3;

  //Assignement operators
  int a4 = 5;
  a4 += 1; //a4 = a4 + 1;
  a4 -= 1; //a4 = a4 - 1;
  a4 *= 2; //a4 = a4 * 2;
  a4 /= 2; //a4 = a4 / 2;
  a4 %= 2; //a4 = a4 % 2;

  ++a4; //a4 += 1; prefix operation
  a4++; //a4 += 1; suffix operation

  int b4 = 1;
  int c4 = b4++;
  printf("C4 = %d\n", c4);
  printf("B4 = %d\n", b4);

  int d4 = 1;
  int e4 = ++d4;
  printf("E4 = %d\n", e4);
  printf("D4 = %d\n", d4);

  --a4; //a4 = a4 - 1; prefix
  a4--; //a4 = a4 - 1; suffix

  return 0;
}