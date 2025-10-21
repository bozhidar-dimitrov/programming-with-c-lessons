#include <stdio.h>

#define SUM(A, B) A + B
#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

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

#define BUBLE_SORT(ARR, SIZE) \
  for (int i = 0; i < SIZE - 1; i++) { \
    for (int j = 0; j < SIZE - 1 - i; j++) { \
      if (ARR[j] > ARR[j+1]) { \
        int temp = ARR[j]; \
        ARR[j] = ARR[j+1]; \
        ARR[j+1] = temp; \
      } \
    } \
  }

int main(void) {

  printf("%d\n", SUM(7, 5));
  printf("%d\n", SQUARE(2));
  printf("%d\n", SQUARE_SAFE(2+1));

  int arr[3] = {1, 5, 3};

  //Takes less code, but more time to execute:
  bubbleSort(arr, 3);
  bubbleSort(arr, 3);
  bubbleSort(arr, 3);

  //Takes more code (more time to compile), but executes faster:
  BUBLE_SORT(arr, 3)
  BUBLE_SORT(arr, 3)
  BUBLE_SORT(arr, 3)

  return 0;
}