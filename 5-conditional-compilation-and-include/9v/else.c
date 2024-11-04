#include <stdio.h>

#define WINDOWS 0

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #else 
  printf("We are not under Windows\n");
  #endif

  #if WINDOWS
  printf("Windows has positive value \n");
  #else 
  printf("Windows has zero value\n");
  #endif

  return 0;
}