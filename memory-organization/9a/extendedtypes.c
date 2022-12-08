#include <stdio.h>

int main(void) {

  char b = 'a'; //max: 126
  printf("%c \n", b);
  unsigned char b1 = 'b'; //max: 255
  printf("%c \n", b1);
  
  short f = 19;
  printf("%hd", f);
  unsigned short f1 = 19;
  printf("%hu", f1);

  int a = 5;
  printf("%d \n", a);
  unsigned int a1 = 5;
  printf("%u \n", a1);

  long d = 123123;
  printf("%ld \n", d);
  unsigned long d1 = 123123;
  printf("%lu \n", d1);

  long long g = 2324213123;
  printf("%lld \n", g);
  unsigned long long g1 = 2324213123;
  printf("%llu \n", g1);

  float e = 44.1;
  printf("%f \n",e);

  double c = 22.13;
  printf("%lf \n", c);

  long double h = 22.13;
  printf("%Lf \n", h);

  return 0;
}