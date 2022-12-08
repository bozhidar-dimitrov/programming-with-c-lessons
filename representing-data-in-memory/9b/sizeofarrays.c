#include <stdio.h>

void test(int arr[]) {
  //Will throw a warning
  size_t length = sizeof(arr) / sizeof(arr[0]);
  printf("Length of array: %zu \n", length);
}

int main(void) {
  long a[4] = {1, 2, 3, 4};

  size_t size = sizeof(a);
  printf("Size of array: %zu \n", size);

  size_t length = sizeof(a) / sizeof(a[0]);
  printf("Length of array: %zu \n", length);

  return 0;
}