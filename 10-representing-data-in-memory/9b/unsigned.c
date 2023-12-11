#include <stdio.h>

int main(void) {

  char a = 250;
  printf("%d\n", a);

  unsigned char b = 250;
  unsigned int b1;
  printf("%u\n", b); //%u - integers
  printf("%u\n", b1); //%u - integers

  unsigned short c = 234;
  printf("%hu\n", c);

  unsigned long d = 2424;
  printf("%lu\n", d);

  unsigned long long e = 3243444;
  printf("%llu\n", e);

  return 0;
}