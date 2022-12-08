#include <stdio.h>

int main(void) {
  int a = 5;
  printf("Address of a: %p \n", &a);

  int b[3] = {1, 2, 3};
  printf("1: %p\n", &b[0]);
  printf("2: %p\n", &b[1]);
  printf("3: %p\n", &b[2]);

  return 0;
}