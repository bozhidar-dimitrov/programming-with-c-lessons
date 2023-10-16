#include <stdio.h>

#define ASSIGN_VAR(TYPE, NAME, ARG) TYPE ## NAME ## ARG = 5

int main(void) {

  int externalquitbuffer = 0;
  ASSIGN_VAR(external, quit, buffer);
  printf("The value is: %d", externalquitbuffer);



  return 0;
}