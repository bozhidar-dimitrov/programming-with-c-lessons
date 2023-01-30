#include <stdio.h>

int main(void) {
  
  int a = 10;
  int * p = &a;

  float b = 5.5;
  float * k = &b;

  void * x = &a;
  * (int *) x = 15;
  printf("%d\n", * (int *) x);

  * (float *) x = 15.5;
  printf("%f\n", * (float *) x);

  return 0;
}