#include <stdio.h>

void foo(int a) {
  //int a = 10; compiler forbits redeclaring a variable with the same name
  a++;
}

int * bar() {
  int a[5] = {1, 2, 3, 4, 5};
  return a;
}

int main(void) {

  int x = 15;
  foo(x);
  printf("%d ", x);

  int * arr = bar();
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}