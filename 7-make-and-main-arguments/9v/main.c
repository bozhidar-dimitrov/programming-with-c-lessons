#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double result1 = square(5.5);
  printf("!Square:%lf!\n", result1);

  int result2 = factoriel(5);
  printf("Factoriel:%d\n", result2);

  int result3 = stringlen("Georgi");
  printf("Len: %d\n", result3);

  return 0;
}