#include <stdio.h>

int a = 7;

void foo(void) {
  a++;
  printf("%d\n", a);
}

int main(void) {
  foo();
  printf("%d\n", a);

  return 0;
}