#include <stdio.h>

int main(void) {

  signed char a = 250;
  printf("%d \n", a);

  unsigned char b = 250;
  printf("%u \n", b);

  unsigned short d = 233;
  printf("%hu \n", d);

  unsigned int c = 250;
  printf("%u \n", c);

  unsigned long e = 123123;
  printf("%lu \n", e);

  unsigned long long f = 123123;
  printf("%llu \n", f);

  return 0;
}