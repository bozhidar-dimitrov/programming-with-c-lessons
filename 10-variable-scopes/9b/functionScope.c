#include <stdio.h>

int foo(int a) {
  a = 10;
}

int * initArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  //Returning address of local variables is forbidden
  return arr;
}

int main(void) {

  int a = 1;
  foo(a);

  printf("%d", a);

  int * arr = initArray();
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}