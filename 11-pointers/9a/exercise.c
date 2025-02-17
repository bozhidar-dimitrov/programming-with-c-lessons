#include <stdio.h>

int main(void) {

  int x1 = 10;
  int x2 = 15;

  int *p1 = &x1;
  int *p2 = p1;

  printf("X1:%d\n", x1);
  printf("X2:%d\n", x2);

  printf("p1:%d\n", *p1);
  printf("p2:%d\n", *p2);

  printf("------------------\n");

  x1 = 20;

  printf("X1:%d\n", x1);
  printf("X2:%d\n", x2);

  printf("p1:%d\n", *p1);
  printf("p2:%d\n", *p2);

  printf("------------------\n");

  *p2 = 5;

  printf("X1:%d\n", x1);
  printf("X2:%d\n", x2);

  printf("p1:%d\n", *p1);
  printf("p2:%d\n", *p2);

  printf("------------------\n");

  p1 = &x2;
  *p1 = 30;

  printf("X1:%d\n", x1);
  printf("X2:%d\n", x2);

  printf("p1:%d\n", *p1);
  printf("p2:%d\n", *p2);

  printf("------------------\n");

  return 0;
}