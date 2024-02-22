#include <stdio.h>

void print2darray(char (*ptr)[3], int rowscount) {
  //Printing 2d arrays, using address arithmetic
  for (int i = 0; i < rowscount; i++) {
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

  int array1d[] = {1, 2, 3};
  printf("array1d: %p\n", array1d); //The name of 1d array holds the address of the array in memory which is equal to the address of the first element of the array
  printf("&array1d[0]: %p\n", &array1d[0]); //prints the same address that is holded by the array name
  printf("array1d + 1: %p\n", array1d + 1); //offsets the initial address with 4 bytes, because the size of int (the type of the array) is 4 bytes

  printf("arr: %p\n", arr); //Similar to the 1d arrays, the 2d array name holds the initial address where the array is placed in the memory
  printf("&arr[0][0]: %p\n", &arr[0][0]); //prints the same address as the one holded by the 2d array name
  printf("arr + 1: %p\n", arr+1); //similar to 1d arrays address arithmetic offsets the initial adress, but here the offset is the size of the whole subarray
  printf("*(arr + 1): %p\n", *(arr + 1)); //dereferencing the 2d array name gives pointer to an 1d array
  printf("*(arr + 1) + 2: %p\n", *(arr + 1) + 2); //address arithmetic to 1d array pointer, offsets the address by the size of the elements in the 1d array
  printf("*(*(arr + 1) + 2): %d\n", *(*(arr + 1) + 2)); //prints the value of arr[1][2]

  char (*ptr)[3] = arr;

  print2darray(arr, 2);

  return 0;
}