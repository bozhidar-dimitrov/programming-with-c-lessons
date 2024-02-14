#include <stdio.h>

int main(void) {

  int a = 15;
  printf("Address of a: %p\n", &a);

  int * p = &a;
  printf("Address of a: %p\n", p);

  printf("Value of a: %d\n", *p);

  int b = 21;
  *p = b;
  printf("Value of a: %d\n", a);



  return 0;
}