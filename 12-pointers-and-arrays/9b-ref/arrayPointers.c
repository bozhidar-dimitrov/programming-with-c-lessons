#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  printf("arr name: %p\n", arr);
  //Gives warning - incompatible types:
  int **pp = &arr;
  printf("Address of pp: %p \n", pp);\
  //The offset is 8 byte - the size of pointers in 64 bit architectures
  printf("Address of pp + 1: %p \n", pp+1);

  //Declaring pointer to an array:
  int (*ptr)[4] = &arr;
  printf("Address of ptr: %p \n", ptr);
  //The offset is 16 bytes here = 1 * sizeof(arr) - one whole array
  printf("Address of ptr + 1: %p \n", ptr + 1);

  printf("Address of *ptr: %p \n", *ptr);
  //The offset here is 4 byte, because from pointer to array we obtain int pointer
  printf("Address of *ptr + 1: %p \n", *ptr + 1);

  //The conclusion here is that the pointer type is important for the address arithmetic
  

  return 0;
}