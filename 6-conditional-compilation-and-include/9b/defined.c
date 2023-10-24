#include <stdio.h>

#define WINDOWS
#define PREMIUM_VERSION
#define BUFFER_SIZE 1024

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #endif 

  #if (defined WINDOWS) && (defined PREMIUM_VERSION)
  printf("We are under Windows\n");
  #endif

  #if defined WINDOWS && BUFFER_SIZE > 512
  printf("Windows with buffer size > 512");
  #endif

  #ifndef WINDOWS
  printf("We are not under Windows\n");
  #endif

  #if ! defined WINDOWS
  printf("We are not under Windows\n");
  #endif

  return 0;
}