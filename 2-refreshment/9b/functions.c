#include <stdio.h>

int sum(int a, int b) {
  int c = a + b;
  return c;
}

void print(int a) {
  printf("%d\n", a);
}

int main(void) {

  int result = sum(6, 7);
  printf("Sum:%d\n", result);

  print(20);

  return 0;
}