#include <stdio.h>

#define LINUX 1

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #elif defined LINUX
  printf("We are under Linux \n");
  #elif defined APPLE
  printf("We are under MacOS \n");
  #else
  printf("We are under some other OS \n");
  #endif

  return 0;
}