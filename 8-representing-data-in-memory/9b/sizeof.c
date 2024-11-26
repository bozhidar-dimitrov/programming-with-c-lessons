#include <stdio.h>

int main(void) {

  char a = 6;
  size_t sizeOfCharVariable = sizeof(a);
  printf("Size of char variable %zu \n", sizeOfCharVariable);

  size_t sizeOfInt = sizeof(int);
  printf("Size of int %zu", sizeOfInt);

  return 0;
}