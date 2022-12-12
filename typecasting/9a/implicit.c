#include <stdio.h>

long double square(long double x) {
  return x * x;
}

int main(void) {
  int a = 5;
  float a1 = a;
  printf("%f\n", a1);

  float b = 6.7;
  int b1 = b;
  printf("%d\n", b1);

  int c = 123123;
  unsigned char c1 = c;
  printf("%d\n", c1);

  //char -> unsigned char -> short -> unsigned short -> int ->
  //unsigned int -> long -> unsigned long -> long long -> unsigned long long ->
  //-> float -> double -> long double

  char d = -127;
  unsigned char d1 = d;
  printf("%u\n", d1);

  int e = 5;
  int e1 = 2;
  float e2 = e / e1;
  printf("%f\n", e2);

  float e3 = 2.0;
  float e4 = e / e3;
  printf("%f\n", e4);

  long double result = square(e);
  printf("%Lf\n", result);

  long double result2 = square(e3);
  printf("%Lf\n", result2);

  return 0;
}