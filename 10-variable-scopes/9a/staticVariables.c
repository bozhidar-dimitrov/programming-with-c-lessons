#include <stdio.h>

int bar() {
  return 5;
}

int foo() {
  //Static variables can be initialized only with constants
  static int a = 0;
  //This is not allowed:
  //static int a = bar();
  a++;
  printf("%d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  //a is not visible here:
  //printf("%d\n", a);

  return 0;
}