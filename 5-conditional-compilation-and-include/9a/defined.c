#include <stdio.h>

#define BUFFER_SIZE 1024
#define WINDOWS 0

int main(void) {

  #if BUFFER_SIZE > 512 && WINDOWS
  printf("Buffer size > 512 and WINDOWS - true");
  #endif

  #if BUFFER_SIZE > 512 && defined WINDOWS
  printf("The Windows macro is defined and buffer size > 512");
  #endif

  //This code:
  #ifdef WINDOWS
  printf("Windows specific code \n");
  #endif

  //is equivalent to this code:
  #if defined WINDOWS
  printf("Windows specific code \n");
  #endif

  return 0;
}