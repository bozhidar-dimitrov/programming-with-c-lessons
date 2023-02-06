#include <stdio.h>

int main(void) {

  int arr[3] = {1, 5, 7};
  int *p = arr;
  int (* ptr)[3] = &arr; //like double pointer

  printf("arr=%p\n", arr);
  printf("p=%p\n", p);
  printf("ptr=%p\n", ptr);

  printf("sizeof(arr) = %zu\n", sizeof(arr));
  printf("sizeof(ptr) = %zu\n", sizeof(ptr));

  printf("arr+1 =%p\n", arr + 1);
  printf("p+1 =%p\n", p + 1);
  printf("ptr+1 =%p\n", ptr + 1);

  return 0;
}