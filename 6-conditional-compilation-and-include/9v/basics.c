#include <stdio.h>

#define LINUX

int main(void) {

  printf("This is OS specific program\n");

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #endif

  #ifdef LINUX
  printf("We are under linux\n");
  #endif

  return 0;
}