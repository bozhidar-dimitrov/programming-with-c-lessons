#include <stdio.h>

#define WINDOWS 1
#define BUFFER_SIZE 2048
#define OS_BIT_VERSION_64 1

void printinfo(void) {
  printf("This is print info command:\n");
  
  //#ifdef WINDOWS == #if defined WINDOWS
  #if defined WINDOWS
  printf("You are under Windows OS\n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 1024
  printf("There is buffer size and it is greater than 1024\n");
  #endif

  #if defined WINDOWS && defined OS_BIT_VERSION_64
  printf("You are under 64 bit Windows OS\n");
  #endif

  #if WINDOWS == 0
  printf("You are not under Windows\n");
  #endif
}


int main(void) {
  printinfo();
  return 0;
}