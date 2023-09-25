#include <stdio.h>

int sum(int a, int b) {
  int c = a + b;
  return c;
}

void sum2(int a, int b) {
  int c = a + b;
  printf("%d\n", c);
}

int main(void) {

  int arg1 = 5;
  int arg2 = 10;

  int result = sum(arg1, arg2);
  printf("%d\n", result);

  sum2(arg1, arg2);

  return 0;
}