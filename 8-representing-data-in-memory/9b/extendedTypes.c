#include <stdio.h>

int main(void) {

  char a = 'b';

  short a1 = 5;
  printf("%hd\n", a1);

  int b = 154;

  long c = 1312312;

  long long c1 = 2131231;
  printf("%lld\n", c1);

  float d = 3.14;

  double e = 3.14359;

  long double e1 = 3.143569;
  printf("%Lf\n", e1);

  return 0;
}