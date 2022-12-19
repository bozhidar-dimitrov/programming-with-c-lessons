#include <stdio.h>

int a = 7;

void foo(void) {
  a++;
  printf("In foo: %d\n", a);
}

int main(void) {
  foo();
  printf("In main: %d\n", a);

  return 0;
}