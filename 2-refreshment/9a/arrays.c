#include <stdio.h>

void fillArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}

int main(void) {

  int arr[6];
  arr[0] = 7;
  arr[1] = 8;
  arr[2] = 3;
  arr[3] = 5;
  arr[4] = 2;
  arr[5] = 1;
  printArray(arr, 6);
  printf("--------------------------\n");

  int arr1[6] = {1, 2, 3, 4, 5, 6};
  int arr2[] = {1, 2, 3, 4, 5, 6};

  int arr3[100];
  fillArray(arr3, 100);

  printArray(arr3, 100);

  return 0;
}