#include <stdio.h>

long double square(long double x) {
  return x * x;
}

int main(void) {
  int a = 5;
  float a1 = a;
  printf("%f\n", a1);

  float b = 5.5;
  int b1 = b;
  printf("%d\n", b1);

  //char -> unsigned char -> short -> unsigned short -> int ->
  //unsigned int -> long -> unsigned long -> long long -> unsigned long long ->
  //float -> double -> long double

  char c = -127;
  unsigned int c1 = c;
  printf("%u\n", c1);

  int d1 = 5;
  int d2 = 2;
  float d3 = d1 / d2;
  printf("%f\n", d3);

  float d4 = 2.0;
  float d5 = d1 / d4;
  printf("%f\n", d5);

  long double result = square(d1);
  printf("%Lf\n", result);

  return 0;
}