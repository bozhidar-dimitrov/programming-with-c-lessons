#include <stdio.h>

int main(void) {

  int arr1[2] = {1, 2};
  int arr2[2] = {3, 4};
  int arr3[2] = {5, 6};

  int * arr[3];
  arr[0] = arr1;
  arr[1] = arr2;
  arr[2] = arr3;

  printf("arr name: %p\n", arr);
  printf("&arr[0]: %p\n", &arr[0]);

  printf("arr[0] name: %p\n", arr[0]);
  printf("&arr[0][0]: %p\n", &arr[0][0]);

  //Dereferncing arr (*arr) => returns pointer =>
  //Array of pointers is the same as double pointer;

  //So here I can have double pointer and point it to the
  //array of pointers;
  int **pp = arr;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }


  return 0;
}