#include <stdio.h>

#define WINDOWS

int main(void) {

  printf("This is test program\n");

  #ifndef WINDOWS
  printf("We are not under windows \n");
  #endif

  return 0;
}