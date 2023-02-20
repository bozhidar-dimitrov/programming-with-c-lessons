#include <stdio.h>

int main(void) {

  int arr1[4] = {1, 2, 3, 1};
  int arr2[4] = {4, 5, 6, 4};
  int arr3[4] = {7, 8, 9, 7};

  int *ptr[3];
  ptr[0] = arr1;
  ptr[1] = arr2;
  ptr[2] = arr3;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  return 0;
}