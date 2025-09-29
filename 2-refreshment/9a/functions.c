#include <stdio.h>

int sum(int a, int b) {
  int result = a + b;
  return result;
}

void print(int a) {
  printf("%d\n", a);
}

int main(void) {

  //result = 5 + 6
  int result = sum(5, 6);
  printf("Result: %d\n", result);

  print(10);

  return 0;
}