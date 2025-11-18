#include <stdio.h>

int main(void) {

  int a = 10;
  a = 15;
  printf("%d\n", a);

  const float c = 3.14;
  
  //Chaning constant value is not allowed:
  c = 15;
  printf("%f\n", c);

  return 0;
}