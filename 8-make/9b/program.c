#include <stdio.h>
#include "strings.h"

int main(void) {

  char name[] = "Martin";
  int len = stringlen(name);
  printf("Length of name is: %d\n", len);

  return 0;
}