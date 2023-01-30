#include <stdio.h>

void setxtofive(int * x) {
  *x = 5;
}

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main(void) {
  int a = 10;
  setxtofive(&a);
  printf("%d\n", a);

  int x1 = 5;
  int x2 = 15;
  swap(&x1, &x2);
  printf("%d, %d\n", x1, x2);

  int x;
  scanf("%d", &x);
  printf("%d\n", x);

  return 0;
}