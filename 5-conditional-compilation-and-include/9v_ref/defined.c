#include <stdio.h>

#define WINDOWS 0
#define BUFFER_SIZE 256

int main(void) {

  #ifdef WINDOWS
  printf("We are under Windows \n");
  #endif

  #if WINDOWS
  printf("We are under Windows \n");
  #endif

  #if defined WINDOWS
  printf("We are under Windows \n");
  #endif

  #if defined BUFFER_SIZE && BUFFER_SIZE > 127
  printf("There are buffers with size > 127\n");
  #endif

  return 0;
}