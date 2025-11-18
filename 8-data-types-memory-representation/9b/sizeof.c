#include <stdio.h>

int main(void) {

  char a = 5;
  size_t charSize = sizeof(a);
  printf("Char size: %zu\n", charSize);

  size_t intSize = sizeof(int);
  printf("int size: %zu\n", intSize);

  return 0;
}