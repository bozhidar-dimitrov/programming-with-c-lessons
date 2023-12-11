#include <stdio.h>

int main(void) {

  char a = 'a';

  short a1 = 535;
  printf("%hd\n", a1);

  int b = 50;

  long c = 123213213;

  long long c1 = 123213123;
  printf("%lld\n", c1);

  float d = 5.5;

  double e = 5.855;

  long double e1 = 5.53434;
  printf("%Lf\n", e1);

  return 0;
}