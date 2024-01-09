#include <stdio.h>

void foo() {
  static int a = 0;
  a++;
  printf("a: %d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  return 0;
}