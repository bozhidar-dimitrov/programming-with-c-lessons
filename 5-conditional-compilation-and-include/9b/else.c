#include <stdio.h>

#define LINUX

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #else
  printf("We are not under Windows \n");
  #endif

  #if defined LINUX
  printf("We are under Linux\n");
  #else
  printf("We are not under Linux\n");
  #endif

  return 0;
}