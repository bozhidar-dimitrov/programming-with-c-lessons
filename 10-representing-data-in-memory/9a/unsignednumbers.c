#include <stdio.h>

int main(void) {

  signed char a = 250;
  printf("%d\n", a);

  unsigned char b = 250;
  printf("%u\n", b); //unsigned int - %u

  unsigned short c = 333;
  printf("%hu\n", c);

  unsigned long d = 23423432;
  printf("%lu\n", d);

  unsigned long long e = 234234234234;
  printf("%llu\n", e);

  return 0;
}