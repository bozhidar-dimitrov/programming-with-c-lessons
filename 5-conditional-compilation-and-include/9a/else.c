#include <stdio.h>

#define LINUX 1

int main(void) {

  #ifdef WINDOWS 
  printf("We are under windows \n");
  #else 
  printf("We are on some other OS\n");
  #endif

  #if defined LINUX
  printf("We are under Linux \n");
  #else
  printf("We are not under linux \n");
  #endif

  return 0;
}