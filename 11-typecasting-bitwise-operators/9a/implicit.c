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
  //float -> double - long double - no data loss
  //from larger type to smaller - data loss

  char a3 = 115;
  unsigned char b3 = a3;
  printf("B3:%u\n", b3);

  char a4 = -115;
  unsigned char b4 = a4;
  printf("B4:%u\n", b4);

  int a5 = 543;
  float b5 = a5;
  printf("B5:%f\n", b5);

  float a6 = 5.95;
  int b6 = a6;
  printf("B6:%d\n", b6);

  int c1 = 10;
  int c2 = 3;
  float d1 = c1/c2;
  printf("D1:%f\n", d1);

  int f1 = 10;
  float f2 = 3;
  float d2 = f1/f2;
  printf("D2:%f\n", d2);

  long double x1 = square(f1);
  printf("X1:%Lf\n", x1);

  long double x2 = square(f2);
  printf("X2:%Lf\n", x2);

  long long y1 = LLONG_MAX;
  printf("Y1:%lld\n", y1);

  long double y2 = y1;
  printf("Y2:%Lf\n", y2);

  return 0;
}