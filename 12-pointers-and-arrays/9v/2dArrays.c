#include <stdio.h>

void print2dArray(char (*arr)[3], int rowsCount) {
  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }
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

  printf("Name of 2d array: %p\n", arr);
  printf("&arr[0][0]: %p\n", &arr[0][0]);

  printf("arr + 1: %p\n", arr + 1);
  printf("&arr[1][0]: %p\n", &arr[1][0]);
  //So the name of the arr acts as a pointer to an array:

  printf("*(arr + 1): %p\n", *(arr + 1));
  printf("&arr[1][0]: %p\n", &arr[1][0]);
  //We again recieve the same address, but the pointer type has changed:
  //from array pointer to normal pointer (or the same as 1d array)

  printf("*(arr + 1): %p\n", *(arr + 1) + 2);
  printf("&arr[1][2]: %p\n", &arr[1][2]);

  printf("*(arr + 1): %d\n", *(*(arr + 1) + 2));
  printf("arr[1][2]:%d\n", arr[1][2]);

  printf("\n");

  //Address arithmetic for two dimensional arrays
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }

  //We can store the name of 2d array in array pointer:
  char (*ptr)[3] = arr;

  print2dArray(arr, 2);

  printf("\n");

  char arr2[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };
  print2dArray(arr2, 4);


  return 0;
}