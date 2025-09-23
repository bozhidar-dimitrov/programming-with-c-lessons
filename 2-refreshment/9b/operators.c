#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a = 5;
  int b = a + 10;
  int c = a - 3;
  int d = a / 2;
  int e = a * 5;
  int f = a % 2;

  //Comparison operators
  int a1 = 10;
  int b1 = 15;
  int c1 = a1 == b1;
  int d1 = a1 != b1;
  int e1 = a1 < b1;
  int f1 = a1 > b1;
  int g1 = a1 <= b1;
  int h1 = a1 >= b1;

  //Logical operators;
  int a2 = 0;
  int b2 = 1;
  int c2 = a2 && b2;
  int d2 = a2 || b2;
  int e2 = !a2;

  //Assignment operators;
  int a3 = 3;
  a3 += 1; //a3 = a3 + 1
  a3 -= 1; //a3 = a3 - 1
  a3 *= 2; //a3 = a3 * 2;
  a3 /= 2; //a3 = a3 / 2;
  a3 %= 2; //a3 = a3 % 2;

  a3++; //a3 += 1 postfix;
  ++a3; //a3 += 1 prefix;

  int b3 = 1;
  int c3 = b3++;
  printf("c3==%d\n", c3);
  printf("b3==%d\n", b3);

  int d3 = 1;
  int e3 = ++d3;
  printf("d3==%d\n", d3);
  printf("e3==%d\n", e3);

  a3--; //a3 = a3 - 1 postfix;
  --a3; //a3 = a3 - 1 prefix;
  
  /*
   This is multiline
   comment
   !
   */


  return 0;
}