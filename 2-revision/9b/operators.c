#include <stdio.h>

int main(void) {

  //Aritmetic operators
  int a = 5 + 6; //addition
  double b = 15.4 - 53.2; //subtraction
  int c = 5 * 7;//multiplication
  int d = 5 / 2; //subtraction
  float e = 5.0 / 2.0;
  int f = 11 % 5; //modulo

  //Logical operators
  int a1 = 1 && 0;
  int b1 =  1 || 1;
  int c1 = ! 1;

  //Comparison operators
  int a2 = 5 < 10;
  int b2 = 5 > 10;
  int c2 = 6 == 5;
  int d2 = 4 <= 10;
  int e2 = 5 >= 10;
  int f2 = 7 != 5;

  /*
    Multiline comment  
  */
  //Assignement operators
  int a3 = 5;
  int c3 = a3++; //a == 6, c == 5
  int d3 = ++a3; //d == 7, a == 7
  a3--;
  --a3;
  a3 += 10;
  a3 -= 10;
  a3 *= 10;
  a3 /= 10; //a3 = a3 / 10;

  return 0;
}