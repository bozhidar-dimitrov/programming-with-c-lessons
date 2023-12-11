#include <stdio.h>

int main(void) {

  int b = 0;

  const int a = 15;
  printf("%d\n", a);

  //Throws compilation error
  a = 10;

  return 0;
}