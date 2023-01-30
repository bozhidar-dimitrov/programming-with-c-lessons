#include <stdio.h>

void settofive(int * a) {
  *a = 5;
}

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main(void) {
  
  int a = 10;
  settofive(&a);
  printf("%d\n", a);

  int x1 = 10;
  int x2 = 5;
  swap(&x1, &x2);
  //call a function

  printf("%d, %d\n", x1, x2);

  return 0;
}