#include <stdio.h>

int main(void) {

  int a = 10;
  printf("%p \n", &a);

  int * p = &a;
  printf("%p \n", p);

  //dereferencing operator
  printf("%d \n", *p);
  *p = 15;
  printf("%d \n", a);

  return 0;
}