#include <stdio.h>

int main(void) {

  char a = 150;
  size_t charSize = sizeof(a);
  printf("char bytes: %zu\n", charSize);

  size_t intSize = sizeof(int);
  printf("int bytes: %zu\n", intSize);

  return 0;
}