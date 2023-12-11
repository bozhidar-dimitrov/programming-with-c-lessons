#include <stdio.h>

int main(void) {

  //Normal variable
  int a = 0;
  a = 10;
  a++;
  printf("%d \n", a);

  //Constant variables
  const int b = 10;
  printf("%d \n", b);

  //Throws compilation error
  b = 50;

  return 0;
}