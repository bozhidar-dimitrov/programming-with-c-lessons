#include <stdio.h>

#define LINUX

int main(void) {

  #ifdef WINDOWS
  printf("This is windows specific code \n");
  #elif defined LINUX
  printf("This is Linux specific code \n");
  #elif defined APPLE
  printf("This is Mac OS specific code \n");
  #else 
  printf("We are on some other OS \n");
  #endif

  return 0;
}