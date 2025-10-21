#include <stdio.h>

#define SUM(A, B) A + B
#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

int sum(int a, int b) {
  return a + b;
}

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

#define BUBBLE_SORT(ARR, SIZE) \
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

  printf("%d\n", sum(7, 5));

  int arr[5] = {1, 5, 3, 2, 4};
  bubbleSort(arr, 5);
  bubbleSort(arr, 5);
  bubbleSort(arr, 5);

  BUBBLE_SORT(arr, 5)
  BUBBLE_SORT(arr, 5)
  BUBBLE_SORT(arr, 5)

  printf("%d\n", SQUARE(2));
  printf("%d\n", SQUARE(2 + 1));
  printf("%d\n", SQUARE_SAFE(2 + 1));

  return 0;
}