#include <stdio.h>

int main(void) {
  int a = 8;

  //How much bytes are allocated for a;
  size_t size = sizeof(a);

  printf("Size:%zu\n", size);
  printf("Size of long: %zu \n", sizeof(long));

  return 0;
}