#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};

  printf("Name of the array: %p\n", arr);
  printf("arr[0]: %p\n", &arr[0]);

  printf("arr: %p\n", &arr);

  //With normal pointer
  int *p = arr; 

  //It seems logical to store the address of the array in double pointer:
  int **pp = &arr;

  //But the address arithmetic gives offset of 8 bytes, not 12 as we expect:
  printf("Address stored in pp:%p\n", pp);
  printf("pp+1:%p\n", pp+1);

  //The right way: using array pointer
  int (*arrPtr)[3] = &arr;

  printf("Address stored in arrPtr:%p\n", arrPtr);
  printf("arrPtr+1:%p\n", arrPtr+1);

  return 0;
}