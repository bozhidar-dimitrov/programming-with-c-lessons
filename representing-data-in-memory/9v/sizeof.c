#include <stdio.h>

int main(void) {
  int b = 5;
  size_t size = sizeof(b);
  printf("Size of b:%zu\n", size);

  printf("Size of long: %zu\n", sizeof(long));

  return 0;
}