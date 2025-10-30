#include <stdio.h>

#define BUFFER_SIZE 512
#define OS_VERSION 5

#define LINUX 0

int main(void) {

  #if BUFFER_SIZE > 256
  printf("We are under OS with buffer size > 256\n");
  #endif

  #if BUFFER_SIZE > 256
  printf("We are under OS with buffer size > 256\n");
  #endif

  #if BUFFER_SIZE > 256 && OS_VERSION > 10
  printf("We are under latest os version \n");
  #endif
  
  #ifdef LINUX
  printf("We are under linux\n");
  #endif

  #if LINUX
  printf("We are under linux\n")
  #endif

  return 0;
}