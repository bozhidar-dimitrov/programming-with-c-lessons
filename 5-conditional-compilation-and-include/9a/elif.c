#include <stdio.h>

#define APPLE

int main(void) {

  #ifdef WINDOWS
  printf("Windows specific code \n");
  #elif defined LINUX
  printf("Linux specific code \n");
  #elif defined APPLE
  printf("Mac OS specific code \n");
  #else
  printf("This is some other OS code \n");
  #endif

  return 0;
}