#include <stdio.h>

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}

void fillArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
}

int main(void) {

  int arr[5];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  printf("arr[0] = %d\n", arr[0]);
  printArr(arr, 5);

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4, 5};

  int arr3[100];
  fillArray(arr3, 100);
  printArr(arr3, 100);

  return 0;
}