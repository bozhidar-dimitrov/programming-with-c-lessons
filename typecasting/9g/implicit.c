#include <stdio.h>

double square(double x) {
  return x * x;
}

int main(void) {

  int x = 6;
  float y = x;
  printf("%f\n", y);

  double result = square(x);
  printf("%lf\n", result);

  char a = 'a';
  int a1 = a;
  printf("%d\n", a1);

  //char -> unsigned char -> short int -> unsigned short int
  //-> int -> unsigned int -> long -> unsigned long -> float ->
  //double -> long double

  int b = -128;
  unsigned b1 = b;
  printf("%u\n", b1);

  double c = 52.23;
  int c1 = c;
  printf("%d\n", c1);

  int d = 123123;
  char d1 = d;
  printf("%d\n", d1);

  int e1 = 5;
  int e2 = 2;
  int e3 = 5 / 2;
  printf("%d\n", e3);

  float e4 = e1 / e2;
  printf("%f\n", e4);

  float e5 = 2.0;
  float e6 = e1 / e5;
  printf("%f\n", e6);

  return 0;
}