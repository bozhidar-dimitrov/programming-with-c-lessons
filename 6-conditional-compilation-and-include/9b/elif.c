#include <stdio.h>

#define LINUX

int main(void) {

  #if defined WINDOWS
  printf("We are under Windows\n");
  #elif defined LINUX
  printf("We are under Linux\n");
  #else
  printf("We are under some other system\n");
  #endif

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #elif defined LINUX
  printf("We are under Linux\n");
  #else
  printf("We are under some other system\n");
  #endif

  return 0;
}