#include <stdio.h>

#define LINUX 1

int main(void) {

  #if defined WINDOWS
  printf("We are under windows \n");
  #elif defined APPLE
  printf("We are under MacOS\n");
  #elif defined LINUX
  printf("We are under linux \n");
  #else
  printf("We are on some other OS\n");
  #endif

  return 0;
}