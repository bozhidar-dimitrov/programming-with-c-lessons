#include <stdio.h>

#define BUFFER_SIZE 1024

#define WINDOWS 0

int main(void) {

  #if BUFFER_SIZE > 512
  printf("This is code that works with buffer size > 512\n");
  #endif

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #endif
  
  int name = 5;
  #if name
  printf("THe value of Windows macro is true\n");
  #endif

  return 0;
}