#include <stdio.h>

#define WINDOWS

int main(void) {

  printf("This is OS specific code\n");
  #ifndef WINDOWS
  printf("We are not under Windows\n");
  #endif

  return 0;
}