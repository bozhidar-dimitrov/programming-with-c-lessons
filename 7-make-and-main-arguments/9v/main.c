#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  printf("!!!Hello, world ----!\n");

  double result = square(5.0);
  printf("Square: %lf\n", result);

  int len = stringlength("Ivan");
  printf("%d\n", len);

  return 0;
}