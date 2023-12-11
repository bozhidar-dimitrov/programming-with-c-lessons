#include <stdio.h>

int main(void) {

  int a = 8;
  char b = 10;

  size_t intbytes = sizeof(a);
  printf("Int bytes: %zu \n", intbytes);

  size_t charbytes = sizeof(int);
  printf("Char bytes: %zu \n", charbytes);

  return 0;
}