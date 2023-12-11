#include <stdio.h>

int main(void) {

  char a = 99;
  printf("Symbol: %c \n", a);
  printf("Number: %d \n", a);

  short a1 = 234;
  printf("%hd \n", a1);

  int b = 45;

  long c = 1232;

  long long c1 = 123123123;
  printf("%lld \n", c1);

  float d = 5.5;

  double e = 5.903;

  long double e1 = 4.4234234;
  printf("%Lf\n", e1);

  return 0;
}