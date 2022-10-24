#include <stdio.h>

#define WINDOWS 0
#define LINUX 1
#define BUFFER_SIZE 2048
#define OS_BIT_VERSION_64 1

void printosinfo() {
  printf("This is os info:\n");

  //#ifdef WINDOWS == #if defined WINDOWS
  #if ! defined WINDOWS
  printf("We are not under Windows\n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 1024
  printf("There is buffer size and it is greater than 1024\n");
  #endif

  #if defined LINUX && defined OS_BIT_VERSION_64
  printf("We are under 64 bit Linux\n");
  #endif

  #if defined LINUX
  printf("We are under Linux\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}