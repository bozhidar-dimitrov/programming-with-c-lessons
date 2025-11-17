#include <stdio.h>

int main(void) {

  int a = 5;
  a = 10;
  printf("%d\n", a);

  const int b = 11;

  //This is not allowed by the compiler:
  b = 20;
  printf("%d\n", b);

  return 0;
}