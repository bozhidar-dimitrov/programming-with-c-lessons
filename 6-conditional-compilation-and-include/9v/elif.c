#include <stdio.h>

#define LINUX 

int main(void) {

  #ifdef WINDOWS
  printf("We are under windows \n");
  #elif defined LINUX
  printf("We are under linux \n");
  #else 
  printf("We are on some other OS\n");
  #endif

  return 0;
}