#include <stdio.h>

#define LINUX

int main(void) {

  #ifndef WINDOWS
  printf("We are on OS different than Windows\n");
  #endif

  #ifndef LINUX
  printf("We are on OS different than Linux\n");
  #endif
  

  return 0;
}