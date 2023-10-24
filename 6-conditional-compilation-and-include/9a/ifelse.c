#include <stdio.h>

//#define WINDOWS

int main(void) {

  printf("This is OS specific program\n");

  #if defined WINDOWS
  printf("We are under Windows\n");
  #else 
  printf("We are not under Windows\n");
  #endif

  #ifndef WINDOWS
  printf("We are not under Windows");
  #else 
  printf("We are under Windows");
  #endif

  return 0;
}