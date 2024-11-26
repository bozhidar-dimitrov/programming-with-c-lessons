#include <stdio.h>

int main(void) {

  const double PI = 3.14234234;

  printf("%lf", PI);

  //changing the value of a constant - gives a compiler error 
  //PI = 5;

  return 0;
}