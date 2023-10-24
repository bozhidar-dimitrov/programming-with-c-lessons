#include <stdio.h>

#define LINUX

int main(void) {

  #if defined WINDOWS
  printf("We are under Windows \n");
  #else 
  printf("We are not under Windows \n");
  #endif

  #ifdef LINUX
  printf("We are under linux\n");
  #else 
  printf("We are not under linux\n");
  #endif

  return 0;
}