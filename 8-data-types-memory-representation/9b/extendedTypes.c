#include <stdio.h>

int main(void) {

  char a = 'a';

  short a1 = 42;
  printf("%hd\n", a1);

  int b = 4123;

  long c = 41241;

  long long c1 = 12312312;
  printf("%lld\n", c1);

  //--------------------------------

  float d = 5.15;

  double e = 4.531;

  long double f = 123123.123213;
  printf("%Lf\n", f);

  return 0;
}