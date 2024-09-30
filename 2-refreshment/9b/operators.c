#include <stdio.h>

int main(void) {

  //Aritmethic operators
  int a = 10;
  int a1 = a + 5;
  int a2 = a - 6;
  int a3 = a * 7;
  int a4 = a / 2;
  int a5 = a % 3;

  //Logical operators
  int b = !0;
  int b1 = 1 && 0;
  int b2 = 1 || 0;

  //Comparison operators
  int c = 5 > 3;
  int c1 = 5 < 3;
  int c2 = 5 == 3;
  int c3 = 5 >= 3;
  int c4 = 5 <= 3;
  int c5 = 5 != 3;

  //Assignment operators
  int d = 10;
  d = d  + 5;
  d += 5;
  d -= 5;
  d *= 10;
  d /= 10;
  d %= 2;
  d += 1;
  d++;
  ++d;
  int x = d++;
  x = ++d;
  d--;
  --d;

  //Bitwise operators => we will learn about them this year.

  return 0;
}