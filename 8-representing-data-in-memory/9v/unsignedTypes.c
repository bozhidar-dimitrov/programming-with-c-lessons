#include <stdio.h>

int main(void) {

  signed char a = 250;
  printf("%d\n", a);

  //Целият диапазон от стойности, ще се използва за положителни числа
  //за char = 0 - 255
  unsigned char a1 = 250;
  printf("%u\n", a1);

  unsigned short b1 = 2344;
  printf("%hu\n", b1);

  unsigned int b = 23424;
  printf("%u\n", b);

  unsigned long c = 2342;
  printf("%lu", c);

  unsigned long long e = 23423424;
  printf("%llu\n", e); 

  return 0;
}