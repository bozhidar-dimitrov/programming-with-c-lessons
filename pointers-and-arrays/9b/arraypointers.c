#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  int *p = arr;
  int (*ptr)[3] = &arr; //It is like a double pointer

  printf("arr=%p\n", arr);
  printf("p=%p\n", p);
  printf("ptr=%p\n", ptr);

  printf("sizeof(ptr)=%zu\n", sizeof(ptr));
  printf("sizeof(arr)=%zu\n", sizeof(arr));

  printf("arr+1=%p\n", arr+1); //4 bytes offset
  printf("p+1=%p\n", p+1); //4 bytes offset
  printf("ptr+1=%p\n", ptr+1); //12 bytes offset = sizeof(int) * array length

  return 0;
}