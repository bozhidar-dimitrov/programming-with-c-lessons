#include <stdio.h>

//passing arguments by value
void foo(int a) {
  a = 15;
}

//passing argumments by reference
void foo1(int * a) {
  *a = 15;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {

  int x = 10;
  foo(x);
  printf("%d\n", x);

  int x2 = 10;
  foo1(&x2);
  printf("%d\n", x2);

  int a = 7;
  int b = 5;
  swap(&a, &b);
  printf("A:%d, B:%d\n", a, b);

  return 0;
}