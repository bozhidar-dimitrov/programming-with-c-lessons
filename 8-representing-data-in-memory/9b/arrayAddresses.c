#include <stdio.h>

int main(void) {

  char a[3] = "ab";

  printf("Size of char: %zu\n", sizeof(char));
  printf("%p\n", &a[0]);
  printf("%p\n", &a[1]);
  printf("%p\n", &a[2]);

  int b[3] = {1, 2 ,3};

  printf("Size of int: %zu\n", sizeof(int));
  printf("%p\n", &b[0]);
  printf("%p\n", &b[1]);
  printf("%p\n", &b[2]);

  return 0;
}