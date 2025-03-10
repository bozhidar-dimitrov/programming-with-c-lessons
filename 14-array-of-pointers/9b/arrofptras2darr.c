#include <stdio.h>

int main(int argc, char ** argv) {

  int arr[3] = {1, 2, 3};
  int * p = arr;

  int arr1[3] = {1, 2, 3};
  int arr2[3] = {4, 5, 6};
  int arr3[3] = {7, 8, 9};

  int *ptr[3];
  ptr[0] = arr1;
  ptr[1] = arr2;
  ptr[2] = arr3;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  printf("ptr: %p\n", ptr);
  printf("&ptr[0]: %p\n", &ptr[0]);

  //Dereferencing the the ptr gives a pointer
  printf("*ptr: %p\n", *ptr);
  printf("&ptr[0][0]: %p\n", &ptr[0][0]);

  int **pp = ptr;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }

  return 0;
}