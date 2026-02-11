#include <stdio.h>

void print2dArray(char (*ptr)[3], int rowsCount) {
  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(ptr+i) + j));
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {

  char arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("Name of 2d array: %p\n", arr);
  printf("&arr[0][0]: %p\n", &arr[0][0]);

  //Because 2d arrays is array of arrays,
  //Each element of the array is another array,
  //So the offset is a whole subarray:
  printf("arr+1: %p\n", arr+1);
  printf("&arr[1][0]: %p\n", &arr[1][0]);

  //So the address arithmetic is the same as arraypointers
  char (*p)[3] = arr;

  printf("*(arr+1): %p\n", *(arr+1));
  printf("&arr[1][0]: %p\n", &arr[1][0]);
  //The address is the same: but the pointer type changes,
  //from array pointer to normal pointer

  printf("*(arr+1): %p\n", *(arr+1) + 2);
  printf("&arr[1][2]: %p\n", &arr[1][2]);

  printf("*(*(arr+1) + 2): %d\n", *(*(arr+1) + 2));
  printf("arr[1][2]: %d\n", arr[1][2]);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr+i) + j));
    }
    printf("\n");
  }
  printf("\n");

  print2dArray(arr, 2);

  char arr2[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };

  print2dArray(arr2, 4);

  return 0;
}