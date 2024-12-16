#include <stdio.h>

void foo() {
  static int a = 0;
  a++;
  printf("Variables a: %d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  return 0;
}