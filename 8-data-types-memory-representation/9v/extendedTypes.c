#include <stdio.h>

int main(void) {

  char a = 12;

  short a1 = 435;
  printf("%hd\n", a1);

  int b = 2342;

  long c = 324234;

  long long c1 = 234234234;
  printf("%lld\n", c1);

  float d = 5.5;

  double e = 5.234;

  long double f = 5.23452;
  printf("%Lf\n", f);

  return 0;
}