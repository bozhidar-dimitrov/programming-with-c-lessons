#include <stdio.h>

int main(void) {

  #ifndef WINDOWS
  printf("We are not under Windows!\n");
  #endif

  return 0;
}