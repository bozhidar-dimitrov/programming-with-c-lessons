#include <stdio.h>

int bar() {
  return 5;
}

void foo() {
  static int a = 0;

  //Not allowed: static variable initializers must be constants
  //static int a = bar();
  a++;
  printf("Result: %d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  return 0;
}