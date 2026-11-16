#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double result = square(5.5);
  printf("Result:%lf\n", result);

  int strLen = stringlength("Test");
  printf("Length:%d\n", strLen);

  return 0;
}