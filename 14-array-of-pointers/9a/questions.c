#include <stdio.h>

int main(void) {

  int arr1[3] = {1, 2, 3};
  int arr2[3] = {4, 5, 6};
  int arr3[3] = {7, 8, 9};

  int * ptr1[3];
  ptr1[0] = arr1;
  ptr1[1] = arr2;
  ptr1[2] = arr3;

  return 0;
}