#include <stdio.h>

int main(void) {

  int a = 5;
  float b = (float)a;

  float a1 = 5.7;
  //Removes the fraction part of real number
  a1 = (int)a1;
  printf("%f\n", a1);

  int a8 = 5;
  int b8 = 2;
  float c8 = (float)a8 / b8;
  printf("%f\n", c8);

  return 0;
}