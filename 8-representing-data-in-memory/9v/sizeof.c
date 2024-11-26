#include <stdio.h>

int main(void) {

  char a = 6;
  size_t sizeOfCharVariable = sizeof(a);
  printf("Size of a char variable: %zu\n", sizeOfCharVariable);

  size_t sizeOfInt = sizeof(int);
  printf("Size of the int type: %zu\n", sizeOfInt);

  return 0;
}