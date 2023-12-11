#include <stdio.h>

int main(void) {

  char a = 5;
  size_t sizeOfA = sizeof(a);
  printf("Size of a char variable: %zu\n", sizeOfA);

  int b = 5;
  size_t sizeOfB = sizeof(b);
  printf("Size of a int variable: %zu\n", sizeOfB);

  size_t sizeOfShort = sizeof(short);
  printf("Size of the short type: %zu\n", sizeOfShort);

  return 0;
}