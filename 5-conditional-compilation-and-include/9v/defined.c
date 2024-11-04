#include <stdio.h>

#define BUFFER_SIZE 1024
#define WINDOWS 0

int main(void) {

  #if BUFFER_SIZE > 512 && WINDOWS
  printf("We are under windows with buffer size > 512");
  #endif

  #if BUFFER_SIZE > 512 && defined WINDOWS
  printf("We are under windows with buffer size > 512\n");
  #endif;

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #endif

  #if defined WINDOWS && BUFFER_SIZE > 512
  printf("We are under Windows \n");
  #endif

  return 0;
}