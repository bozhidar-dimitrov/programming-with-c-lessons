#include <stdio.h>

int main(void) {

  //Explicit typecasting
  int a = 5;
  float b = (float)a;
  printf("%f\n", b);

  int a2 = 5;
  int b2 = 2;
  float c2 = (float)a2 / b2;
  printf("%f\n", c2); //Real number division

  return 0;
}