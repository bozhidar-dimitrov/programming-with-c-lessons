#include <stdio.h>

int main(void) {

  int arr[3] = {3, 5, 10};
  int (*ptr)[3] = &arr;
  int *p = arr;

  printf("arr=%p\n", arr);
  printf("ptr=%p\n", ptr);
  printf("p=%p\n", p);

  printf("ptr + 1=%p\n", ptr + 1);
  printf("p + 1 =%p\n", p + 1);

  printf("sizeof(arr)=%zu\n", sizeof(arr));
  printf("sizeof(ptr)=%zu\n", sizeof(ptr));

  return 0;
}