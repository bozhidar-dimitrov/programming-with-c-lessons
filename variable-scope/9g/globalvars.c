#include <stdio.h>

int a = 10;

int foo() {
  printf("In foo: %d\n", a);
}

int main(void) {
  printf("In Main: %d\n", a);
  foo();

  return 0;
}