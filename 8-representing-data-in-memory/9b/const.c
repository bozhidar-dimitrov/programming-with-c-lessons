#include <stdio.h>

int main(void) {

  const double PI = 3.14159;

  printf("%lf\n", PI);

  //Gives a compiler error
  //PI = 15;

  return 0;
}