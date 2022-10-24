#include <stdio.h>

#define DEBUG(VALUE, FORMAT) printf("The value is " FORMAT "\n", VALUE)
#define DEBUG_VALUE(VALUE, FORMAT) printf("The value of " #VALUE " is " FORMAT "\n", VALUE)

int main(void) {
  printf("Hello " " World\n"); //printf("Hello World\n")
  
  int somevar = 7;
  DEBUG(somevar, "%d"); //printf("The value is" "%d" "\n", somevar);
  DEBUG_VALUE(somevar, "%d");
  return 0;
}