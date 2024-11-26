#include <stdio.h>

int main(void) {

  char a = 'g';

  short a1 = 43;
  printf("%hd\n", a1);

  int b = 5;

  long c = 234234;

  long long c1 = 234234324;
  printf("%lld\n", c1);

  float d = 3.14;

  double e  = 3.141231;

  long double e1 = 3.14123123;
  printf("%Lf\n", e1);

  return 0;
}