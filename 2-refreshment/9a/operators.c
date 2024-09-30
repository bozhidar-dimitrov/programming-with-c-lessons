#include <stdio.h>

int main(void) {

  //Arithmetic operators
  int a = 11;
  int a1 = a + 5;
  int a2 = a - 6;
  int a3 = a * 7;
  int a4 = a / 5;
  int a5 = a % 3;

  //Logical operators
  int b = 1 && 1;
  int b1 = 1 || 0;
  int b2 = !0;

  //Comparison operators
  int c = 5 == 6;
  int c1 = 5 >= 6;
  int c2 = 5 <= 6;
  int c3 = 5 != 6;
  int c4 = 5 < 6;
  int c5 = 5 > 6;

  //Assignment operators
  int d = 5;
  d++;
  ++d;
  d += 1;
  d = d + 1;
  int x = d++;
  x = ++d;
  --d;
  d--;

  d -= 5;
  d *= 6;
  d /= 10;
  d %= 3;

  return 0;
}