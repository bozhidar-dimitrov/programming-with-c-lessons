#include <stdio.h>

double sum (int a, double b) {
  return a + b;
}

int main(void) {

  int a = 10;
  int * ptr = &a;
  printf("%d\n", *ptr);

  double (*fptr)(int, double) = sum;

  double result = fptr(5, 10);

  return 0;
}