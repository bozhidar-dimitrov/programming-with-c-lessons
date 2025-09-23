#include <stdio.h>

int sum(int a, int b) {
  int result = a + b;
  return result;
}

void printInt(int a) {
  printf("%d\n", a);
}

int main(void) {

  int c = sum(6,7);
  printf("c:%d\n", c);

  printInt(10);

  return 0;
}