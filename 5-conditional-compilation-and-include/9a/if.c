#include <stdio.h>

#define BUFFER_SIZE 1024
#define WINDOWS 0

int main(void) {

  #if BUFFER_SIZE > 512
  printf("This is os with buffer size > 512");
  #endif

  //Checks whether the macro is defined
  #ifdef WINDOWS
  printf("We are under Windows");
  #endif

  //Checks the value of the macro
  #if WINDOWS
  printf("We are under Windows");
  #endif

  return 0;
}