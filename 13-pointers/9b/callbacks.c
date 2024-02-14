#include <stdio.h>

void print(int a) {
  printf("(%d) ", a);
}

void print2(int a) {
  printf("[%d] ", a);
}

void foreach(int arr[], int arrlen, void (*callback)(int)) {
  for(int i = 0; i < arrlen; i++) {
    callback(arr[i]);
  }
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  foreach(arr, 5, print);
  printf("\n");
  foreach(arr, 5, print2);

  return 0;
}