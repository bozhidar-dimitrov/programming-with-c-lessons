#include <stdio.h>

int main(void) {

  char a = 6;
  printf("The address of a is: %p\n", &a);

  int b = 6;
  printf("The address of b is: %p\n", &b);

  return 0;
}