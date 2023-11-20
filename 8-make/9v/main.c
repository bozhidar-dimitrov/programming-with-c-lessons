#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double a = 2.5;
  double result = square(a);
  printf("Square of a is: %lf\n", result);

  int b = 5;
  int factorielOfB = factoriel(b);
  printf("Factoriel: %d\n", factorielOfB);

  char name[] = "Ivan";
  int namelen = stringlen(name);
  printf("Length of name: %d\n", namelen);

  return 0;
}