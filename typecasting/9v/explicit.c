#include <stdio.h>

int main(void) {
  int a = 5;
  float a1 = (float) a;
  printf("%f\n", a1);

  int b = -125;
  printf("%f\n", (double) b);

  int c = 5;
  int c1 = 2;
  float c2 = (float)c / (float)c1;
  printf("%f\n", c2);

  return 0;
}