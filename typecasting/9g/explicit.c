#include <stdio.h>

int main(void) {
  int a = 7;
  float a1 = (float) a;
  printf("%f\n", a1);

  char b = 'b';
  printf("%d\n", (int)b);

  int c1 = 5;
  int c2 = 2;
  float c3 = (float)c1 / (float)c2;
  printf("%f\n", c3);

  float d1 = 5.2;
  float d2 = 3.6;
  int d3 = (int)d1 / (int)d2;
  printf("%d\n", d3);

  return 0;
}