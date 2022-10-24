#include <stdio.h>

#define DEBUG(VALUE, FORMAT) printf("The value of " #VALUE " is " FORMAT, VALUE)

int main(void) {
  printf("Hello " "World\n");

  int somevar = 7;
  DEBUG(somevar, "%d");
  return 0;
}