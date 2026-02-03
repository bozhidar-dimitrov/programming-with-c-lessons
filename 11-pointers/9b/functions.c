#include <stdio.h>

int foo(int a) {
  a = 15;
}

int foo1(int * a) {
  *a = 15;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int a = 5;
  foo(a);
  printf("%d\n", a);

  int a1 = 5;
  foo1(&a1);
  printf("%d\n", a1);

  int x = 17;
  int y = 25;
  swap(&x, &y);
  printf("%d, %d\n", x, y);

  return 0;
}