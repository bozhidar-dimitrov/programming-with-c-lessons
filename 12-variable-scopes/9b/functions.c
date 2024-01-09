#include <stdio.h>

int * foo() {
  int a[5] = {1, 2, 3, 4, 5};
  return a;
}

int main(void) {

  int * a = foo();
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}