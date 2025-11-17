#include <stdio.h>

int main(void) {

  signed char a = 250;
  printf("%d\n", a); //-6

  unsigned char b = 250;
  printf("%u\n", b); //250

  unsigned short c = 52;
  printf("%hu\n", c);

  unsigned int d = 123;
  printf("%u\n", d);

  unsigned long e = 123124;
  printf("%lu\n", e);

  unsigned long long f = 123123;
  printf("%llu\n", f);

  return 0;
}