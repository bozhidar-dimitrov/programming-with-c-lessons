#include <stdio.h>

int main(void) {

  int a = 6;

  char b = 'x';

  float c = 5.5;

  double d = 5.234;

  long e = 123123;

  printf("A=%d\n", a);
  printf("B=%c\n", b);
  printf("C=%.2f\n",c);
  printf("D=%lf\n", d);
  printf("D=%ld\n", e);

  return 0;
}