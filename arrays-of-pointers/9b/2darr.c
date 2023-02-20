#include <stdio.h>

int main(void) {

  int *ptr[3];

  int arr1[4] = {1, 2, 3, 4};
  int arr2[5] = {5, 6, 7, 8, 9};
  int arr3[3] = {10, 11, 12};

  int sizes[3] = {4, 5, 3};

  ptr[0] = arr1;
  ptr[1] = arr2;
  ptr[2] = arr3;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < sizes[i]; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  return 0;
}