#include <stdio.h>

int main(void) {

  int arr1[3] = {1, 2, 3};
  int arr2[3] = {4, 5, 6};
  int * p = arr1;
  //Here we can use the pointer instead the name of the array.
  printf("%d \n", p[0]);

  int *ptr[2];

  ptr[0] = arr1;
  ptr[1] = arr2;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  printf("%p\n", ptr);
  printf("%p\n", &ptr[0]);
  printf("%p\n", *ptr); //prints the address of the first element of the first subarray
  printf("%p\n", &ptr[0][0]);

  //Dereferencing the array of pointers gives again a pointer which is similar to double pointers
  int **pp = ptr;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }

  return 0;
}