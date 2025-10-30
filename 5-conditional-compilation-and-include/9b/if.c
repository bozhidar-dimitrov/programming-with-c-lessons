#include <stdio.h>

#define BUFFER_SIZE 1024

#define WINDOWS 0
#define LINUX 1

int main(void) {

  #if BUFFER_SIZE > 512
  printf("We are on OS with buffer size greater than 512\n");
  #endif

  #if BUFFER_SIZE > 2048
  printf("We are on OS with buffer size greater than 2048\n");
  #endif

  #if WINDOWS
  printf("We are under Windows \n");
  #endif

  #if LINUX
  printf("We are under Linux \n");
  #endif

  return 0;
}