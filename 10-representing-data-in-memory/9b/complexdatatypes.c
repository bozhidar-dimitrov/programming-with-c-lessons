#include <stdio.h>

int main(void) {

  char a[3] = "ab";
  printf("1 - %p\n", &a[0]);
  printf("2 - %p\n", &a[1]);
  printf("3 - %p\n", &a[2]);

  int b[3] = {1, 2, 3};
  printf("1i - %p\n", &b[0]);
  printf("2i - %p\n", &b[1]);
  printf("3i - %p\n", &b[2]);

  return 0;
}