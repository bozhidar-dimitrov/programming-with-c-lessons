#include <stdio.h>

#define LINUX

int main(void) {

  printf("This is OS specific program\n");

  #ifndef WINDOWS
  printf("We are not under Windows \n");
  #endif

  #ifndef LINUX
  printf("We are not under Linux \n");
  #endif

  return 0;
}