#include <stdio.h>

int main(void) {

  #if defined WINDOWS
  printf("We are under Windows \n");
  #else 
  printf("We are not under Windows\n");
  #endif

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #else 
  printf("We are not under Windows\n");
  #endif

  return 0;
}