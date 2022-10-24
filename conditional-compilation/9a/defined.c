#include <stdio.h>

#define LINUX 1
#define OS_BIT_VERSION_64 1
#define BUFFER_SIZE 512

void printosinfo() {
  printf("Info about your os:\n");

  //#ifdef LINUX == #if defined LINUX
  #if defined LINUX
  printf("You are under linux\n");
  #endif

  #if defined LINUX && defined OS_BIT_VERSION_64
  printf("You are under 64 bit Linux\n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 1024
  printf("There is buffer size and it is greater than 1024 \n");
  #endif

  #if defined WINDOWS
  printf("You are under Windows\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}