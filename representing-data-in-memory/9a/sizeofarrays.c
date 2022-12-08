#include <stdio.h>

void test(int a[]) {
  //Will throw a warning
  printf("In functions: %zu\n", sizeof(a) / sizeof(a[0]));
}

int main(void) {

  long a[4] = {1, 2, 3, 4};
  printf("Size of array: %zu\n", sizeof(a));

  size_t length = sizeof(a) / sizeof(a[0]);
  printf("Length of array: %zu\n", length);

  return 0;
}