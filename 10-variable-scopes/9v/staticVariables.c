#include <stdio.h>

int initA() {
  return 5;
}

int foo() {
  static int a = 0;

  //Static variables can be initialized only with constants:
  //So do below instruction is not allowed
  //static int b = initA();
  a++;
  printf("%d\n", a);
}

int main(void) {

  foo();
  foo();
  foo();

  return 0;
}