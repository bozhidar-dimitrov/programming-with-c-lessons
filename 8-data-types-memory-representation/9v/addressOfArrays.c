#include <stdio.h>

int main(void) {

  char a[] = {1, 2, 3};
  printf("a[0]: %p\n", &a[0]);
  printf("a[1]: %p\n", &a[1]);
  printf("a[2]: %p\n", &a[2]);

  int b[] = {1, 2, 3};
  printf("b[0]: %p\n", &b[0]);
  printf("b[1]: %p\n", &b[1]);
  printf("b[2]: %p\n", &b[2]);

  return 0;
}