#include <stdio.h>

int main(void) {

  signed char c = 250;
  printf("%d\n", c);

  unsigned char c1 = 250;
  printf("%u\n", c1);

  unsigned char c2 = -6;
  printf("C2:%u\n", c2);

  unsigned short a = 234;
  printf("%hu\n", a);

  unsigned int b = 24234;
  printf("%u\n", b);

  unsigned long d = 23423;
  printf("%lu\n", d);

  unsigned long long e = 234234234;
  printf("%llu\n", e);

  return 0;
}