#include <stdio.h>

//We can define macro, without giving it value
#define LINUX

int main(void) {

  #ifndef WINDOWS
  printf("We are not under Windows \n");
  #endif

  #ifndef LINUX
  printf("We are not under Linux \n");
  #endif

  return 0;
}