#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void) {

  #if BUFFER_SIZE > 512
  printf("Buffer size is greater than 512 \n");
  #endif

  #if BUFFER_SIZE > 2048
  printf("Buffer size is greater than 2048 \n");
  #endif

  int buffersize = 1024;
  if (buffersize > 512) {
    printf("Buffer size is greater than 512");
  }

  return 0;
}