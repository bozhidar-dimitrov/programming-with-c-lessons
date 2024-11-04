#include <stdio.h>

#define WINDOWS 0
#define BUFFER_SIZE 1024 

int main(void) {

  #if BUFFER_SIZE > 512 && WINDOWS
  printf("Buffer size > 512 and WINDOWS macro true\n");
  #endif

  #if BUFFER_SIZE > 512 && defined WINDOWS
  printf("Buffer size > 512 and Windows is defined \n");
  #endif

  #ifdef WINDOWS
  printf("Windows is defined \n");
  #endif

  #if defined WINDOWS
  printf("Windows is defined\n");
  #endif

  return 0;
}