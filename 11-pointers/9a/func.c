#include <stdio.h>

void foo(int a) {
  a = 15;
}

void foo2(int * p) {
  *p = 15;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int x = 0;

  foo(x);
  //X is not changed
  printf("%d\n", x);

  foo2(&x);
  printf("%d\n", x);

  int a = 10;
  int b = 20;
  swap(&a, &b);
  printf("A = %d, B = %d\n", a, b);

  return 0;
}