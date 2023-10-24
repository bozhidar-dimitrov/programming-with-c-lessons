#include <stdio.h>

//#define WINDOWS
#define LINUX 1

int main(void) {

  printf("This is OS specific program\n");

  #if defined WINDOWS
  printf("We are under Windows\n");
  #elif defined LINUX
  printf("We are under Linux\n");
  #else 
  printf("We are on some other OS\n");
  #endif

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #elif defined LINUX
  printf("We are under Linux\n");
  #else 
  printf("We are on some other OS\n");
  #endif

  return 0;
}