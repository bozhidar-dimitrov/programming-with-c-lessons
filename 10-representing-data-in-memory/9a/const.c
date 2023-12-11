#include <stdio.h>

int main(void) {

  const int a = 15;
  printf("%d\n", a);

  //This throws compilation error
  //a = 10;

  return 0;
}