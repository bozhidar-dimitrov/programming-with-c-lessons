#include <stdio.h>

#define ASSIGN_VAR(TYPE, NAME) TYPE ## NAME = 5

int main(void) {

  int externalquit = 0;
  //externalquit = 5;
  ASSIGN_VAR(external, quit);
  printf("Value: %d\n", externalquit);

  return 0;
}