#include <stdio.h>

int main(void) {

  int arr1[4] = {1, 2, 3, 4};

  int * p = arr1;

  int arr2[4] = {5, 6, 7, 8};
  int arr3[4] = {9, 10, 11, 12};

  int *arrOfPtr[3];

  arrOfPtr[0] = arr1;
  arrOfPtr[1] = arr2;
  arrOfPtr[2] = arr3;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      printf("%d ", arrOfPtr[i][j]);
    }
    printf("\n");
  }

  return 0;
}