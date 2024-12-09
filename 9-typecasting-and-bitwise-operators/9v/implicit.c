#include <stdio.h>

int main(void) {

  //Implicit typecasting examples

  //char -> short -> int -> long -> long long (we can typecast smaller type to bigger integer type)
  //float -> double -> long double
  //From larger to smaller type is not safe operation

  char x = 125;
  int y = x; //Ok
  printf("%d\n", y);

  int x1 = 12345;
  char y1 = x1; //Not Ok
  printf("%d\n", y1);

  //Signed - unsigned problems
  signed char x2 = 125;
  unsigned char y2 = x2; //In this case is Ok
  printf("%u\n", y2);

  unsigned char x3 = 250;
  signed char y3 = x3; //Not ok
  printf("%d\n", y3);

  signed char x4 = -125;
  unsigned char y4 = x4; //Not ok
  printf("%u\n", y4);

  //From integer to real number
  int a = 5;
  double b = a;
  //Ok
  printf("%lf\n", b);

  double a1 = 5.75;
  int b1 = a1;
  //Not ok
  printf("%d\n", b1);

  int a2 = 5;
  int b2 = 2;
  float c2 = a2 / b2;
  printf("%f\n", c2); //Integer division

  int a3 = 5;
  float b3 = 2;
  float c3 = a3 / b3;
  printf("%f\n", c3); //Float division

  return 0;
}