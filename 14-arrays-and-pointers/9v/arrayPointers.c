#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};

  printf("&arr[0]:%p\n", &arr[0]);
  printf("arr:%p\n", arr);

  //Prints the address of the array
  printf("&arr:%p\n", &arr);

  int * p = arr;
  //Prints the address of the pointer
  printf("&p:%p\n", &p);

  //Array pointer
  int (*arrptr)[4] = &arr;
  printf("arrptr:%p\n", arrptr);

  //dereferencing the array pointer gives an array
  printf("*arrptr:%p\n", *arrptr);

  //Offset of 16 bytes = 4 elements * 4 bytes each
  printf("arrptr+1:%p\n", arrptr+1);

  //Offset of 4 bytes - using normal array address arithmetic
  printf("*arrptr+1:%p\n", *arrptr + 1);

  return 0;
}