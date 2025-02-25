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

  printf("The name of arr: %p\n", arr);
  printf("&arr[0][0]: %p\n", &arr[0][0]);

  //The offset is 3 byte - one whole subarray
  //It looks like pointer to arrays:
  //Here the pointer points to the second subarray
  printf("arr + 1:%p\n", arr + 1);
  printf("&arr[1][0]: %p\n", &arr[1][0]);

  //Dereferencing the pointer points to 
  //the first element of the second subarray
  //-it changes the type of the pointer from
  //pointer to an array to a int pointer
  printf("*(arr + 1):%p\n", *(arr + 1));
  printf("&arr[1][0]: %p\n", &arr[1][0]);

  
  printf("*(arr + 1) + 2:%p\n", *(arr + 1) + 2);
  //The same as the above:
  printf("&arr[1][2]: %p\n", &arr[1][2]);

  printf("*(*(arr + 1) + 2):%d\n", *(*(arr + 1) + 2));
  //The same as the above:
  printf("arr[1][2]: %d\n", arr[1][2]);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }

  char (*ptr)[3] = arr;
  printf("-----------------------\n");
  print2dArray(arr, 2);

  char arr2[4][3] = {
    {1, 2, 3}, 
    {4, 5, 6},
    {7, 8, 9}, 
    {10, 11, 12}
  };
  printf("-----------------------\n");
  print2dArray(arr2, 4);


  return 0;
}