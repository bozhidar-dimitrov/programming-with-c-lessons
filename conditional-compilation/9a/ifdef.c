#include <stdio.h>

#define LINUX 1

void printosinfo() {
  printf("Info about your os:\n");

  #ifdef LINUX
  printf("You are under linux\n");
  #endif

  #ifndef WINDOWS
  printf("You are not under Windows\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}