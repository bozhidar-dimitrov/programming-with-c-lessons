#include <stdio.h>

int main(void) {

  char b = 'a';
  printf("%c \n", b);
  unsigned char b1;

  short f = 3;
  printf("%hd \n", f);
  unsigned short f1 = 5;
  printf("%hu \n", f1);

  int a = 5;
  printf("%d \n", a);
  unsigned int a1 = 5;
  printf("%u \n", a1);

  long e = 5;
  printf("%ld \n", e);
  unsigned long e1 = 5;
  printf("%lu \n", e1);

  long long g = 131234123;
  printf("%lld \n", g);
  unsigned long long g1 = 131234123;
  printf("%llu", g1);

  float c = 5.5;
  printf("%f \n", c);

  double d = 5.85;
  printf("%lf \n", d);

  long double h = 5.345234;
  printf("%Lf\n", h);

  return 0;
}