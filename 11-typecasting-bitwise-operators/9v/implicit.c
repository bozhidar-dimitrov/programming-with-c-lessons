#include <stdio.h>
#include <limits.h>

long double square(long double x) {
  return x * x;
}

int main(void) {

  short a = SHRT_MAX;
  printf("A:%hd\n", a);
  int b = a;
  printf("B:%d\n", b);

  int a1 = INT_MAX;
  printf("A1:%d\n", a1);
  short b1 = a1;
  printf("B1:%hd\n", b1);

  //char -> short -> int -> long -> long long - no data loss
  //float -> double -> long double - no data loss
  //typecasting from larger type to smaller - unsafe operation

  char a2 = 124;
  unsigned char b2 = a2;
  printf("B2:%u\n", b2);

  char a3 = -124;
  unsigned char b3 = a3;
  printf("B3:%u\n", b3);

  int a4 = 130;
  float b4 = a4;
  printf("B4:%f\n", b4);

  float a5 = 5.98;
  int b5 = a5;
  printf("B5:%d\n", b5);

  int c1 = 10;
  int c2 = 3;
  float c3 = c1/c2;
  printf("C3:%f\n", c3);

  int d1 = 10;
  float d2 = 3;
  float d3 = d1/d2;
  printf("D3:%f\n", d3);

  long double x1 = square(c1);
  printf("X1:%Lf\n", x1);

  long double x2 = square(d2);
  printf("X2:%Lf\n", x2);

  return 0;
}