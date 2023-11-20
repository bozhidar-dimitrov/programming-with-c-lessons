#include <stdio.h>
#include "strings.h"

int main(void) {

  char name[] = "Martin";
  int namelen = stringlen(name);
  printf("Length of name: %d\n", namelen);

  return 0;
}