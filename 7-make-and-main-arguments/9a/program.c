#include <stdio.h>
#include "strings.h"

int main(void) {

  printf("This is our second program\n");

  int len = stringlength("Maria");
  printf("Name length: %d\n", len);

  return 0;
}