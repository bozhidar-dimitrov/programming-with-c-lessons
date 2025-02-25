#include <stdio.h>

void print2dArray(char (*ptr)[3], int rowsCount) {
  for (int i = 0; i < rowsCount; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(ptr + i) + j));
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

  printf("arr name: %p\n", arr);
  printf("arr[0] address: %p\n", &arr[0][0]);
  //The two lines above prints the same address:

  printf("arr + 1: %p\n", arr + 1); //Offsets by a whole subarray 
  printf("arr[1][0] address: %p\n", &arr[1][0]); 
  //The two lines above prints the same address:

  //Here we again take the address of the arr[1][0], 
  //but the pointer type changes from double pointer 
  //to single pointer
  printf("*(arr + 1): %p\n", *(arr + 1));

  printf("*(arr + 1) + 2: %p\n", *(arr + 1) + 2);
  printf("arr[1][3] address: %p\n", &arr[1][2]);

  printf("*(*(arr + 1) + 2): %d\n", *(*(arr + 1) + 2));
  printf("arr[1][2] value: %d\n", arr[1][2]);
  
  char (*ptr)[3] = arr;

  print2dArray(arr, 2);

  char arr2[4][3] = {
    {1, 2, 3}, 
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };

  printf("--------------\n");

  print2dArray(arr2, 4);

  return 0;
}