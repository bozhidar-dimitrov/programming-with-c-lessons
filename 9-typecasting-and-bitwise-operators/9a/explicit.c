#include <stdio.h>

int main(void) {

  //Explicit typecasting
  int a = 5;
  float b = (float)a; //OK
  printf("%f\n", b);

  int a9 = 5;
  int b9 = 2;
  float c9 = (float)a9 / b9;
  printf("%f\n", c9);

  float a8 = 6.85;
  int b8 = (int)a8; //Not OK - we lose the decimal point part
  printf("%d\n", b8);

  return 0;
}