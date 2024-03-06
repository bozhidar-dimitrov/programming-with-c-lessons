#include <stdio.h>

int main(void) {

  int arr1[3] = {1, 2, 3};
  int arr2[3] = {4, 5, 6};
  int * p = arr1;
  printf("%d\n", p[0]);

  int * arrptr[2];

  arrptr[0] = arr1;
  arrptr[1] = arr2;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arrptr[i][j]);
    }
    printf("\n");
  }

  printf("%p\n", arrptr);
  printf("%p\n", &arrptr[0]);
  //prints the address of the first subarray
  printf("%p\n", *arrptr);
  printf("%p\n", &arrptr[0][0]);

  int ** pp = arrptr;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }


  return 0;
}