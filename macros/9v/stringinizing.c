#include <stdio.h>

#define DEBUG(VALUE, FORMAT) printf("The value of " #VALUE " is:" FORMAT "\n", VALUE)

int main(void) {
  printf("Hello " "World\n");

  int somevar = 7;
  DEBUG(somevar, "%d"); //printf("The value of somevar is %d\n", somevar);
  return 0;
}