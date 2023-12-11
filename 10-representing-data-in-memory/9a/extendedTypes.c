#include <stdio.h>

int main(void) {

  char a = 'a';

  short a1 = 52;
  printf("%hd\n", a1);

  int b = 10;

  long c = 11;

  long long c2 = 23423423;
  printf("%lld\n", c2);

  float d = 5.5;

  double e = 8.6;

  long double e1 = 8.6345345;
  printf("%Lf\n", e1);

  return 0;
}