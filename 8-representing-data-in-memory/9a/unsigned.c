#include <stdio.h>

int main(void) {

  signed char a = 250;
  printf("%d\n", a);

  unsigned char a1 = 250;
  printf("%u\n", a1);

  unsigned short a2 = 257;
  printf("%hu\n", a2);

  unsigned int a3 = 2341;
  printf("%u\n", a3);

  unsigned long a4 = 234123;
  printf("%lu\n", a4);

  unsigned long long a5 = 23423452;
  printf("%llu\n", a5);

  return 0;
}