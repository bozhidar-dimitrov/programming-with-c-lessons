#include <stdio.h>

void foo(int a) {
  a = 15;
}

void foo1(int * a) {
  *a = 15;
}

void swap(int *a, int *b) {
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

  int x = 10;
  int y = 15;
  swap(&x, &y);
  printf("x:%d, y:%d\n", x, y);

  //scanf - works with pointers
  
  return 0;
}