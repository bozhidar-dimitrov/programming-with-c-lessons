#include <stdio.h>

int sum(int a, int b) {
  int c = a + b;
  return c;
}

int main(void) {

  int result = sum(6, 7);
  printf("Sum:%d\n", result);
  return 0;
}