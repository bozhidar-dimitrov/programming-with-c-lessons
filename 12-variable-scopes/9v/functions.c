#include <stdio.h>

int * foo() {
  int a[5] = {1, 2, 3, 4, 5};
  return a;
}

int * foo2(int a[]) {
  a[0] = 0;
  a[1] = 1;
  a[2] = 2;
  a[3] = 3;
  a[4] = 4;
  return a;
}

int main(void) {

  int b[5];
  foo2(b);
  for (int i = 0; i < 5; i++) {
    printf("%d ", b[i]);
  }

  int * a = foo();
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}