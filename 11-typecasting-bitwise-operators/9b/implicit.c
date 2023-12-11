#include <stdio.h>
#include <limits.h>

long double square(long double a) {
  return a * a;
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
  //from bigger type to smaller - unsafe operation

  char a3 = 125;
  unsigned b3 = a3;
  printf("B3:%u\n", b3);

  char a4 = -125; //01111101 -> 1000 0010 -> 1000 0011
  unsigned char b4 = a4;
  printf("B4:%u\n", b4);

  int a5 = 130;
  float b5 = a5;
  printf("B5:%.1f\n", b5);

  float a6 = 5.98;
  int b6 = a6;
  printf("B6:%d\n", b6);

  int c1 = 10;
  int c2 = 3;
  float c3 = c1/c2;
  printf("C3:%f\n", c3);

  int d1 = 10;
  float d2 = 3;
  float d3 = d1/d2;
  printf("D3:%f\n", d3);

  long double x1 = square(c1);
  printf("x1: %Lf\n", x1);

  long double x2 = square(d2);
  printf("x2: %Lf\n", x2);

  return 0;
}