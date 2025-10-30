#include <stdio.h>

#define WINDOWS 1

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #else 
  printf("We are not under Windows \n");
  #endif

  #if not defined WINDOWS
  printf("We are not under Windows\n");
  #else 
  printf("We are under Windows\n");
  #endif

  return 0;
}