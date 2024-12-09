#include <stdio.h>

int main(void) {

  int a1 = 5;
  //Explicit typecasting
  float b1 = (float)a1;

  int a7 = 5;
  int b7 = 2;
  float c7 = (float)a7 / b7;
  printf("%f\n", c7);

  return 0;
}