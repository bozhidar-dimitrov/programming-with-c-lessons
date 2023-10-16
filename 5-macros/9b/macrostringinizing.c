#include <stdio.h>

#define DEBUG(X) printf("The value of " #X " is %d\n", X);

int main(void) {

  printf("Hello" " World!\n");

  int something = 7;
  DEBUG(something);

  return 0;
}