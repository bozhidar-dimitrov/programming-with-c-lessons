#include <stdio.h>

void foo(int a) {
  a = 15;
}

void foo1(int * p) {
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
  printf("X:%d\n", x);

  foo1(&x);
  printf("X:%d\n", x);

  int a = 10;
  int b = 15;
  swap(&a, &b);
  printf("A: %d, B: %d\n", a, b);

  return 0;
}