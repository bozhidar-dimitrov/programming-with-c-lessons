#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};

  printf("Name of the array:%p\n", arr);
  printf("&arr[0]: %p\n", &arr[0]);

  printf("&arr: %p\n", &arr);

  int **pp = &arr;

  printf("Address of pp:%p\n", pp);
  printf("pp + 1:%p\n", pp + 1);

  int (*arrPtr)[3] = &arr;

  printf("Address of arrPtr: %p\n", arrPtr);
  printf("Address of arrPtr + 1: %p\n", arrPtr + 1);

  return 0;
}