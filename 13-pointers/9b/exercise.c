#include <stdio.h>

int main(void) {

  int x1 = 10;
  int x2 = 20;

  int * p1 = &x1;
  int * p2 = p1;

  printf("x1: %d \n", x1);
  printf("x2: %d \n", x2);

  printf("p1: %d \n", *p1);
  printf("p2: %d \n", *p2);

  *p1 = 15;
  printf("x1: %d \n", x1);
  printf("x2: %d \n", x2);

  printf("p1: %d \n", *p1);
  printf("p2: %d \n", *p2);

  p1 = &x2;
  printf("x1: %d \n", x1);
  printf("x2: %d \n", x2);

  printf("p1: %d \n", *p1);
  printf("p2: %d \n", *p2);

  return 0;
}