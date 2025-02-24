#include <stdio.h>

void foreach(int arr[], int arrSize, void (*callback)(int)) {
  for (int i = 0; i < arrSize; i++) {
    callback(arr[i]);
  }
}

void print1(int element) {
  printf("%d ", element);
}

void print2(int element) {
  printf("[%d] ", element);
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  foreach(arr, 5, print1);
  printf("\n");

  foreach(arr, 5, print2);
  printf("\n");

  return 0;
}