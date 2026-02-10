#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};

  printf("Address stored in the name of the array: %p\n", arr);
  printf("Address stored in the name of the array: %p\n", &arr);

  int ** pp = &arr;

  printf("Address stored in pp: %p\n", pp);
  //Offset is 8 bytes but in this case should be 12 (sizeof(arr))
  printf("Address stored in pp + 1: %p\n", pp + 1);

  //The correct way of using array pointers
  int (*arrPtr)[3] = &arr;

  printf("Address stored in arrPtr: %p\n", arrPtr);
  //The offset is correct - 12 bytes
  printf("Address stored in arrPtr + 1: %p\n", arrPtr + 1);

  return 0;
}