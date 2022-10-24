#include <stdio.h>

#define PRINT(MESSAGE, ARGUMENTS) printf(MESSAGE, ARGUMENTS)

void print(char * message) {
  printf(message);
}

int main(void) {
  int somevar = 7;
  PRINT("Hello, world\n","");
  PRINT("The value of the var is %d\n", somevar);
  //printf("The value of the var is %d", somevar);
  print("Hello world 2 \n");
  return 0;
}