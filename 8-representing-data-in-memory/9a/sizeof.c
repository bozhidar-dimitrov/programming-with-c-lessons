#include <stdio.h>

int main(void) {

  char a = 6;
  size_t sizeOfCharVariable = sizeof(a);
  printf("Char variable size: %zu\n", sizeOfCharVariable);

  size_t sizeOfInt = sizeof(int);
  printf("int size: %zu\n", sizeOfInt);

  return 0;
}