#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {
  printf("Hello, World Again !!!\n");

  double result = square(5);
  printf("%lf\n", result);

  int len = strlength("Ivana");
  printf("%d\n", len);

  return 0;
}