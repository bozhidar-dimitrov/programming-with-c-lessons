#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  int *p = arr; //Using simple pointer

  int (*ptr)[4] = &arr; //Using array pointer

  printf("Arr address: %p\n", arr);

  printf("Arr address stored in p: %p\n", p);
  printf("Arr address stored in ptr: %p\n", *ptr);
  //The above 3 lines print the same address

  //The offset is 4 bytes = sizeof(int):
  printf("Arr address stored in p + 1: %p\n", p+1);
  //The offset is 16 bytes = 4 elements 4 bytes each:
  printf("Arr address stored in ptr + 1: %p\n", ptr + 1);

  return 0;
}