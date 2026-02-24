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

  printf("Array of pointers name: %p \n", arrOfPtr);
  printf("&arrOfPtr[0]: %p \n", &arrOfPtr[0]);

  //The name of the array holds the address of the first element
  //(the place of the array in memory)
  //So I can dereference it: *arrOfPtr 
  //*arrOfPtr == the pointer that is at index 0
  //=> this acts as a pointer:

  int **pp = arrOfPtr;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }

  return 0;
}