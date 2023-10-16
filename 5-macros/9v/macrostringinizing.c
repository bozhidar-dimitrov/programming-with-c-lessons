#include <stdio.h>

#define DEBUG(X) printf("The value of " #X " is %d", X)

int main(void) {

  printf("Hello" "World\n");

  int something = 5;
  DEBUG(something);

  return 0;
}