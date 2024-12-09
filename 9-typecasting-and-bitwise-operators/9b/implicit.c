#include <stdio.h>

int main(void) {

  //Converting between different types:
  //char -> short -> int -> long -> long long
  //float -> double -> long double

  char a = 125;
  int b = a; //OK, 
  printf("%d\n", b);

  int a1 = 32134;
  char b1 = a1; 
  printf("%d\n", b1);

  //Convering between unsigned and signed types
  char a2 = 125;
  unsigned char b2 = a2; //OK: Unsigned is bigger, and a2 is positive 
  printf("%d\n", b2);

  char a3 = -125;
  unsigned char b3 = a3; //Not ok: different representations
  printf("%d\n", b3);

  unsigned char a4 = 250;
  char b4 = a4; //Not ok, the signed is not big enought
  printf("%d\n", b4);

  //Real number to integer typecasting
  int a5 = 5;
  float b5 = a5; //OK
  printf("%f\n", b5);

  float a6 = 6.75;
  int b6 = a6; //Not ok, because we lose the decimal point part
  printf("%d\n", b6);

  int a7 = 5;
  int b7 = 2;
  float c7 = a7 / b7;
  printf("%f\n", c7);

  int a8 = 5;
  float b8 = 2;
  float c8 = a8 / b8;
  printf("%f\n", c8);

  return 0;
}