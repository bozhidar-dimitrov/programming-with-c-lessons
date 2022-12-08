#include <stdio.h>

int main(void) {

  char d = 'a';
  printf("%c\n", d);

  short f = 1532;
  printf("%hd\n", f);

  int a = 5;
  printf("%d\n", a);

  long e = 152341;
  printf("%ld\n", e);

  long long g = 123123123;
  printf("%lld\n", g);

  float c = 15.5;
  printf("%f\n", c);

  double b = 10.55;
  printf("%lf\n", b);

  long double h = 123.123123;
  printf("%Lf\n", h);

  return 0;
}