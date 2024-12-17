#include <stdio.h>

int bar() {
  return 5;
}

int foo() {

  static int a = 0;
  //Not allowed - static variables can be defined only with constant expressions:
  //static int a = bar();
  a++;
  printf("Value: %d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  return 0;
}