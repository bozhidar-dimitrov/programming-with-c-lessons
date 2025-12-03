#include <stdio.h>

int main(void) {

  int a = 5;
  float b = 16.5;
  //Implicit typecasting
  b = a;

  //Types ordered by size:
  /*
    char 
    unsigned char
    short
    unsigned short
    int 
    unsigned int
    float
    long
    unsigned long
    double 
    long long
    unsigned long long
    long double
  */

  char a1 = 125;
  short b2 = a1;
  printf("%d\n", b2);

  short a3 = 1234;
  char b3 = a3;
  printf("%d\n", b3);

  unsigned char a4 = 255;
  char b4 = a4;
  printf("%d\n", b4);

  char a5 = -23;
  unsigned char b5 = a5;
  printf("%u\n", b5);

  int a6 = 5;
  float b6 = a6;
  printf("%f\n", b6);

  float a7 = 6.5;
  int b7 = a7;
  printf("%d\n", b7);

  int a8 = 5;
  int b8 = 2;
  float c8 = a8 / b8;
  printf("%f\n", c8);

  int a9 = 5;
  float b9 = 2;
  float c9 = a9 / b9;
  printf("%f\n", c9);

  return 0;
}
