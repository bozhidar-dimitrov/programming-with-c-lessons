#include <stdio.h>

#define APPLE

int main(void) {

  #ifdef WINDOWS
  printf("This is windows specific code\n");
  #elif defined LINUX
  printf("This is Linux specific code\n");
  #elif defined APPLE
  printf("This is Apple specific code\n");
  #else
  printf("We are under some other OS \n");
  #endif

  return 0;
}