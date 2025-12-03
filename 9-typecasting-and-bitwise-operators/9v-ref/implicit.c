#include <stdio.h>

int main(void) {

  int a = 5;
  float b = 10;

  //Implicit typecasting
  b = a;
  printf("%f\n", b);

  /** 
   * Types ordered by size:
   * char
   * unsigned char
   * short
   * unsigned short
   * int 
   * unsigned int
   * float
   * long
   * unsigned long
   * double
   * long long
   * unsigned long long
   * long double
   */

  char a1 = 127;
  short b1 = a1;
  printf("%hd\n", b1);

  short a2 = 1234;
  char b2 = a2;
  printf("%d\n", b2);

  unsigned char a3 = 255;
  char b3 = a3;
  printf("%d\n", b3);

  char a4 = -6;
  unsigned char b4 = a4;
  printf("%d\n", b4);

  int a5 = 6;
  float b5 = a5;
  printf("%f\n", b5);

  long long a6 = 6234234234234124;
  //This won't work:
  float b6 = a6;
  printf("%f\n", b6);

  float a7 = 5.5;
  int b7 = a7;
  printf("%d\n", b7);

  int a8 = 5;
  int b8 = 2;
  float c8 = a8/b8;
  printf("%f\n", c8);

  int a9 = 5;
  float b9 = 2;
  float c9 = a9 / b9;
  printf("%f\n", c9);

  return 0;
}