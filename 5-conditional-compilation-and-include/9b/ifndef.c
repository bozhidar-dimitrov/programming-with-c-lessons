#include <stdio.h>

#define LINUX 1

//#define WINDOWS

int main(void) {

  #ifndef WINDOWS
  printf("We are under some other OS\n");
  int c = getchar();
  #endif

  return 0;
}