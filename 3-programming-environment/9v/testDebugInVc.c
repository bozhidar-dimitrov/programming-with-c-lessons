#include <stdio.h>

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) { 
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main(void) {

  int n = 7;
  int arr[7] = {5, 3, 7, 2, 6, 1, 4};
  bubbleSort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}