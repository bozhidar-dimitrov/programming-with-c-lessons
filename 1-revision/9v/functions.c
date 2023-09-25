#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

void sayhello() {
  printf("Hello");
}

int main(void) {

  int result = add(5, 6);
  printf("%d\n", result);

  return 0;
}