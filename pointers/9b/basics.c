#include <stdio.h>

int main(void) {

  int a = 10;
  printf("%p\n", &a);

  int * p = &a;
  printf("%p\n", p);
  printf("%p\n", &p);

  *p = 15;
  printf("%d\n", a);
  printf("%d\n", *p);

  int x1 = 7;
  int x2 = 8;

  int *k = &x1;

  int *k;
  k = &x1;
  *k;



  int *l = k;

  printf("%d\n", x1);
  printf("%d\n", *l);
  printf("%d\n", *k);

  x1 = 33;
  printf("%d\n", x1);
  printf("%d\n", *l);
  printf("%d\n", *k);

  k = &x2;
  printf("%d\n", x2);
  printf("%d\n", *l);
  printf("%d\n", *k);

  return 0;
}