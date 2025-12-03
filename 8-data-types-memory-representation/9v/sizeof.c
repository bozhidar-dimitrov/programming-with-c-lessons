#include <stdio.h>

int main(void) {

  char a = 5;
  size_t charSize = sizeof(a);
  printf("Char size in bytes: %zu\n", charSize);

  size_t shortSize = sizeof(short);
  printf("Short size in bytes: %zu\n", shortSize);

  size_t intSize = sizeof(int);
  printf("Int size in bytes: %zu\n", intSize);

  return 0;
}