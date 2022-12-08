#include <stdio.h>

int main(void) {

  signed char d = 'a';
  printf("%c\n", d);
  unsigned char d1 = 'a';
  printf("%c\n", d1);

  signed short f = 14;
  printf("%hd \n", f);
  unsigned short f1 = 14;
  printf("%hu \n", f1);

  int a = 5;
  printf("%d \n", a);
  unsigned int a1 = 5;
  printf("%u \n", a1);

  long e = 421;
  printf("%ld\n", e);
  unsigned long e1 = 421;
  printf("%lu\n", e1);

  long long g = 12312321;
  printf("%lld \n", g);
  unsigned long long g1 = 12312321;
  printf("%llu \n", g1);

  float b = -5.3;
  printf("%f\n", b);

  double c = 15.34;
  printf("%lf\n", c);

  long double h = 2344.1234;
  printf("%Lf\n", h);

  return 0;
}