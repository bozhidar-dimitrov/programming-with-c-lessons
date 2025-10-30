#include <stdio.h>

#define WINDOWS 1
#define BUFFER_SIZE 512
#define LINUX 0

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #endif

  #if defined WINDOWS
  printf("We are under Windows \n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 256
  printf("We are under OS with buffer size > 256\n");
  #endif

  #ifdef LINUX
  printf("We are under linux\n");
  #endif

  #if LINUX
  printf("We are under linux\n");
  #endif

  return 0;
}