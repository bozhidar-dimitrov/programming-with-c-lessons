#include <stdio.h>

//We can define macro without giving a value
#define WINDOWS

int main(void) {

  #ifndef WINDOWS
  printf("We are not under windows\n");
  #endif

  printf("This code is always included\n");

  return 0;
}