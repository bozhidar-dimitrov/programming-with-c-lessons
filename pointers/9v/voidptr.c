#include <stdio.h>

int main(void) {
  
  int a = 10;
  float b = 5.5;

  void * p = &a;
  * (int *) p = 25;
  printf("%d\n", *(int *)p);

  p = &b;
  * (float *) p = 15;
  printf("%f\n", *(float *)p);

  return 0;
}