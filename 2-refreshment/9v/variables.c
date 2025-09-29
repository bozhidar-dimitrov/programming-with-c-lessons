#include <stdio.h>

int main(void) {

  int a = 5;
  float b = 5.5;
  char c = 'x';

  long d = 10234123;
  double e = 5.2341;

  printf("A=%d\n",a);
  printf("B=%.2f\n",b);
  printf("C=%c\n",c);

  printf("D=%ld\n",d);
  printf("E=%.2lf\n",e);

  return 0;
}