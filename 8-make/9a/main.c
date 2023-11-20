#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double a = 2.5;
  double result = square(a);
  printf("Result is: %lf\n", result);

  int b = 5;
  int factorieloffive = factoriel(b);
  printf("Factoriel: %d\n", factorieloffive);

  char name[] = "Ivan";
  int namelen = stringlen(name);
  printf("Length of string: %d\n", namelen);

  return 0;
}