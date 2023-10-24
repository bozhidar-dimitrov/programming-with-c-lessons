#include <stdio.h>

#define LINUX
#define OS_VERSION 2
#define BUFFER_SIZE 1024

int main(void) {

  #ifdef LINUX
  printf("We are under linux \n");
  #endif

  #if defined LINUX
  printf("We are under linux \n");
  #endif

  #if defined LINUX && defined OS_VERSION
  printf("We are under linux with version 2\n");
  #endif

  #if defined LINUX && BUFFER_SIZE > 512
  printf("We are under linux with buffer size greater than 512\n");
  #endif

  return 0;
}