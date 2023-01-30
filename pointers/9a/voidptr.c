#include <stdio.h>

int main(void) {
  
  int a = 5;
  int * p = &a;

  float b = 5.5; 
  float *k = &b;

  // sizeof(k) == 4 bytes for 32 architecture / 8 bytes for 64 architecture

  void * m = &a;
  * (int *) m = 10;
  printf("%d\n", * (int *)m);

  m = &b;
  * (float *) m = 4.3;
  //* (int *) m = 10; - undefined behaviour
  printf("%f\n", * (float *)m);

  return 0;
}