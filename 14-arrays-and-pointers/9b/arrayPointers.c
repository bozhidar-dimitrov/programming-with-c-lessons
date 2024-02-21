#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  //Returns the address of an array:
  printf("&arr:%p\n", &arr);

  //Array pointer:
  int (*ptr)[4] = &arr;
  printf("ptr:%p\n", ptr);
  printf("*ptr:%p\n", *ptr);

  printf("ptr+1:%p\n", ptr+1);
  printf("*ptr + 1:%p\n", *ptr + 1); //equivalent to arr + 1

  return 0;
}