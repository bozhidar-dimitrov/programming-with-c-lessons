#include <stdio.h>

int main(void) {
  
  int a = 5;
  int *p = &a;

  float b = 5.5;
  float *k = &b;

  void * m = &a;
  * (int *) m = 7;
  printf("%d\n", *(int *)m);

  m = &b;
  *(float *)m = 9.3;
  //*(int *)m = 10; -- undefined behaviour
  printf("%f\n", *(float *)m);

  return 0;
}