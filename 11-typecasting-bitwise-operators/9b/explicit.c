#include <stdio.h>

//Явно преобразуване
int main(void) {

  short a = 3242;
  int b = (int)a;
  printf("B:%d\n", b);

  int c1 = 10;
  int c2 = 3;
  float c3 = (float)c1/ c2;
  printf("C3:%f\n", c3);

  return 0;
}