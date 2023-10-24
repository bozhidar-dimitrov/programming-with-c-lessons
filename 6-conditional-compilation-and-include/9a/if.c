#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void) {

  printf("This is test program \n");
  #if BUFFER_SIZE > 512
  printf("We are using buffer with size greater than 512");
  #endif

  #if BUFFER_SIZE > 2048
  printf("We are using buffer with size greater than 2048");
  #endif

  return 0;
}