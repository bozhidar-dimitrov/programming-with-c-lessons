#include <stdio.h>

int main(void) {

  signed char x = 254; //1 bit for the sign, 7 bits for the value
  unsigned char b = 254; //uses the whole byte for the number

  printf("%d\n", x);
  printf("%u\n", b);

  unsigned short f = 1532;
  printf("%hu\n", f);

  unsigned int a = 5;
  printf("%u\n", a);

  unsigned long e = 152341;
  printf("%lu\n", e);

  unsigned long long g = 123123123;
  printf("%llu\n", g);

  return 0;
}