#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double a = 2.5;
  double result = square(a);
  printf("Squere of a: %lf\n", result);

  int b = 5;
  int factorielOfFive = factoriel(b);
  printf("Factoriel: %d\n", factorielOfFive);

  char name[] = "Ivan";
  int namelen = stringlen(name);
  printf("Length of name is: %d\n", namelen);

  return 0;
}