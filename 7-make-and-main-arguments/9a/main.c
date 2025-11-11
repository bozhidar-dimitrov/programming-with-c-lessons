#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double result1 = square(5.5);
  printf("!Square of 5.5: !%lf\n", result1);

  int result2 = factoriel(5);
  printf("!Factoriel 5: %d\n!", result2);

  int result3 = stringlen("Georgi");
  printf("Result: %d\n", result3);

  return 0;
}