#include <stdio.h>

int main(void) {
  int a = 5;
  size_t size = sizeof(a);
  printf("Size of a: %zu \n", size);

  printf("Size of long: %zu \n", sizeof(long));

  return 0;
}