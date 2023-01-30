#include <stdio.h>

void setxtofive(int * x) {
  *x = 5;
}

void swap(int * x1, int * x2) {
  int temp = *x1;
  *x1 = *x2;
  *x2 = temp;
}

int main(void) {
  
  int a = 15;
  setxtofive(&a);
  printf("%d\n", a);

  int x1 = 10;
  int x2 = 15;
  swap(&x1, &x2);
  printf("%d, %d \n", x1, x2);

  return 0;
}