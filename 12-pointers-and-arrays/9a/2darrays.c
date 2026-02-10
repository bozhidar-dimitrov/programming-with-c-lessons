#include <stdio.h>


void print2dArray(char (*arr)[3], int rowsLength) {
  for (int i = 0; i < rowsLength; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr+i) + j));
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

  printf("The value stored in the name of the 2d array:%p\n", arr);
  printf("Address of a[0][0]:%p\n", &arr[0][0]);

  printf("arr + 1:%p\n", arr + 1);
  printf("&arr[1][0]:%p\n", &arr[1][0]);

  //The same as the address above:
  printf("*(arr + 1):%p\n", *(arr + 1)); //from the pointer to array it beocomes normal pointer
  printf("&arr[1][0]:%p\n", &arr[1][0]);

  printf("*(arr + 1)+2:%p\n", *(arr + 1) + 2); 
  printf("&arr[1][2]:%p\n", &arr[1][2]);

  printf("*(*(arr + 1)+2):%d\n", *(*(arr + 1) + 2));
  printf("arr[1][2]:%d\n", arr[1][2]);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(arr+i) + j));
    }
    printf("\n");
  }

  //2d arrays can be stored in pointers to arrays
  char (*ptr)[3] = arr;
  print2dArray(ptr, 2);

  printf("\n");

  char anotherArray[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
  };

  print2dArray(anotherArray, 4);

  return 0;
}