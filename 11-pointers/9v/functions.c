#include <stdio.h>

//Passing arguments by value
void foo(int a) {
  a = 15;
}

//Passing arguments by reference
void foo1(int * a) {
  *a = 15;
}

//Swapping the value of two variables
void swap(int* a, int* b) {
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

  int x = 5;
  int y = 10;
  swap(&x, &y);
  printf("x:%d, y:%d\n", x, y);

  //scanf works also with pointers

  return 0;
}