#include <stdio.h>

int main(void) {

  //Typecasting between different types
  //char -> short -> int -> long -> long long - 
  //float -> double -> long double

  char a = 125;
  int b = a; //Ok - from smaller type to larger type
  printf("%d\n", b);

  int a1 = 15123;
  char b1 = a1; //Not OK from larger type to smaller type
  printf("%d\n", b1);

  float a2 = 5.25;
  double b2 = a2; //Ok double is more precise than float
  printf("%lf\n", b2);

  double a3 = 5.25125123;
  float b3 = a3; //Not ok, float is less precise than double
  printf("%.10f\n", b3);

  //Typecasting between signed and unsigned types
  char a4 = 125;
  unsigned char b4 = a4; //Ok in this case - a4 is positive
  printf("%u\n", b4);

  char a5 = -125;
  unsigned char b5 = a5; //Not OK - a5 is negative
  printf("%u\n", b5);

  unsigned char a6 = 250;
  char b6 = a6; //Not OK, a6 is larger than the signed version
  printf("%d\n", b6);

  //Real number to integer and vice versa

  int a7 = 5;
  float b7 = a7; //OK
  printf("%f\n", b7);

  float a8 = 6.85;
  int b8 = a8; //Not OK - we lose the decimal point part
  printf("%d\n", b8);

  int a9 = 5;
  int b9 = 2;
  float c9 = a9 / b9;
  printf("%f\n", c9);

  float a10 = 5;
  int b10 = 2;
  float c10 = a10 / b10;
  printf("%f\n", c10);

  return 0;
}