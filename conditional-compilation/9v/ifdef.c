#include <stdio.h>

#define WINDOWS 1

void printosinfo() {
  printf("This is os info:\n");

  #ifdef WINDOWS
  printf("We are under Windows\n");
  #endif

  #ifndef LINUX
  printf("We are not under Linux\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}