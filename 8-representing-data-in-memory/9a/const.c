#include <stdio.h>

int main(void) {

  const double PI = 3.14591;
  printf("%lf\n", PI);

  //Gives a compiler error
  //PI = 34;

  return 0;
}