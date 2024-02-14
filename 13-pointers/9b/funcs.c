#include <stdio.h>

//passing arguments by value
void foo(int a) {
  a = 15;
}

//passing argumments by reference
void foo1(int *a) {
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

  int x1 = 10;
  foo1(&x1);
  printf("%d\n", x1);

  int a = 7;
  int b = 5;
  swap(&a, &b);
  printf("A:%d, B:%d\n", a, b);

  //Scanf uses pointer to save the value in a
  scanf("%d", &a);

  return 0;
}