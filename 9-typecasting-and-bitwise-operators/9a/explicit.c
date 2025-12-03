#include <stdio.h>

int main(void) {

  int a = 5;
  //Explicit typecasting:
  float b = (float)a;

  int a1 = 5;
  int b1 = 2;
  float c1 = (float)a1 / b1;
  printf("%f\n", c1);

  return 0;
}