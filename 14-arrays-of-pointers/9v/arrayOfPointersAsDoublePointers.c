#include <stdio.h>

int main(void) {

  int arr1[4] = {1, 2, 3, 1};

  //This is allowed:
  int *p = arr1;


  int arr2[4] = {4, 5, 6, 4};
  int arr3[4] = {7, 8, 9, 7};

  int *arrOfPtr[3];

  arrOfPtr[0] = arr1;
  arrOfPtr[1] = arr2;
  arrOfPtr[2] = arr3;

  printf("arrOfPtr %p\n", arrOfPtr);
  printf("&arrOfPtr[0] %p\n", &arrOfPtr[0]);

  //So what happens if we dereference the name of the array of pointers:
  //*arrOfPtr => we receive another pointer
  //So the array of pointers act as a double pointer

  int ** pp = arrOfPtr;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }


  return 0;
}