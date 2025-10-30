#include <stdio.h>

#define WINDOWS 0
#define BUFFER_SIZE 1024

int main(void) {

  #if defined WINDOWS
  printf("We are under windows \n");
  #endif

  #ifdef WINDOWS
  printf("We are under windows \n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 512
  printf("We are under windows with buffer size > 512\n");
  #endif

  #ifdef WINDOWS
  printf("We again are under windows \n");
  #endif

  #if WINDOWS
  printf("This code will not be included in compilation \n");
  #endif

  printf("This code is always included \n");

  return 0;
}