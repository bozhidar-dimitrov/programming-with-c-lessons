#include <stdio.h>

int main(void) {
  int a1 = 10;
  
  //Arithmetic operators
  int a2 = a1 + 5;
  int a3 = a1 - 7;
  int a4 = a1 * 3;
  int a5 = a1 / 3;
  int a6 = a1 % 2;

  //Logical operators
  int a7 = 1 || 0;
  int a8 = 1 && 0;
  int a9 = !0;

  //Comparison operators
  int x1 = 5 > 3;
  int x2 = 5 < 3;
  int x3 = 6 == 3;
  int x7 = 6 != 3;
  int x4 = 7 >= 7;
  int x5 = 8 <= 9;

  //Assignment operators
  int y = 5;
  y += 3;
  y -= 4;
  y /= 2;
  y *= 3;
  y += 1;
  y++;
  ++y;
  int z = y++;
  int z1 = ++y;
  y--;
  --y;

  //Bitwise operators = this year

  return 0;
}