#include <stdio.h>

void foo(int a) {
  a++;
}

int * tryInitArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  return arr;
}

int main(void) {

  int a = 10;
  foo(a);
  printf("%d\n", a);

  int * arr = tryInitArray();
  for (int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}