#include <stdio.h>

//passing arguments by value
void foo(int a) {
  a = 15;
}

//passing arguments by reference
void foo1(int * a) {
  *a = 15;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap2(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main(void) {

  int x = 10;
  foo(x);
  printf("%d\n", x);

  int x1 = 10;
  foo1(&x1);
  printf("%d\n", x1);

  int a = 7;
  int b = 5;
  swap(&a, &b);
  //swap2(a, b); doesn't work
  printf("A:%d, B:%d\n", a, b);

  int x3 = 10;
  scanf("%d", &x3);

  return 0;
}