#include <stdio.h>

#define WINDOWS 1

int main(void) {

  printf("This is OS specific code\n");
  #ifdef WINDOWS
  printf("We are under Windows\n");
  printf("Another code under Windows\n");
  #endif

  #ifdef LINUX
  printf("We are under linux\n");
  #endif

  return 0;
}