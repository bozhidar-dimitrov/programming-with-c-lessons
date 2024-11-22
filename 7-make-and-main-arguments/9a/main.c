#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  printf("--!Hello, world!--\n");

  double result = square(5);
  printf("Square of 5:%lf\n", result);

  int fact = factoriel(5);
  printf("Factoriel of 5:%d\n", fact);

  int len = stringlength("Kaloyan");
  printf("Name length: %d\n", len);

  return 0;
}