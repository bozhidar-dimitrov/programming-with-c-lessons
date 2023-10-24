#include <stdio.h>

#define WINDOWS 1
#define PREMIUM_VERSION 1

#define BUFFER_SIZE 1024

int main(void) {

  printf("This is a test program\n");

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #endif

  #if defined WINDOWS && defined PREMIUM_VERSION
  printf("We are under Windows premium\n");
  #endif

  #if defined WINDOWS && BUFFER_SIZE > 512
  printf("We are under Windows with buffer size > 512");
  #endif

  return 0;
}