#include <stdio.h>

#define BUFFER_SIZE 1024

int main(void) {

  #if BUFFER_SIZE > 512
  printf("Buffer size is greater than 512\n");
  #endif

  printf("This code is always included \n");

  return 0;
}