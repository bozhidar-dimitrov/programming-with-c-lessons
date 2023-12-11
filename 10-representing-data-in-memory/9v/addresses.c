#include <stdio.h>

int main(void) {

  int a = 5;
  printf("Address of a: %p\n", &a);

  char b[3] = "ab";
  printf("1 - : %p\n", &b[0]);
  printf("2 - : %p\n", &b[1]);
  printf("3 - : %p\n", &b[2]);

  int c[3] = {1, 2, 3};
  printf("1i - : %p\n", &c[0]);
  printf("2i - : %p\n", &c[1]);
  printf("3i- : %p\n", &c[2]);

  return 0;
}