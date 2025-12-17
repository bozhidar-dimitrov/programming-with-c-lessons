#include <stdio.h>

void foo(int a) {
  a = 10;
}

int * initArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  //Returning address of local variable in C is dangerous operation
  return arr;
}

int main(void) {

  int a = 1;
  foo(a);
  printf("%d \n", a);

  int * arr = initArray();
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}