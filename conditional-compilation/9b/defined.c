#include <stdio.h>

#define LINUX 1
#define OS_BIT_VERSION_64 1
#define BUFFER_SIZE 2048

void printosinfo(void) {
  printf("Info about the current OS:\n");

  //#if defined WINDOWS == #ifdef WINDOWS
  #if defined WINDOWS
  printf("You are under Windows OS\n");
  #endif

  #if defined LINUX
  printf("You are under Linux OS\n");
  #endif

  #if defined LINUX && defined OS_BIT_VERSION_64
  printf("You are under 64 bit Linux");
  #endif 

  #if defined BUFFER_SIZE && BUFFER_SIZE > 1024
  printf("There is buffer size and it is greater than 1024");
  #endif
}

int main(void) {
  printosinfo();
  return 0;
}