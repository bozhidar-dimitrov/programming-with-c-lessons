#include <stdio.h>

#define LINUX 1
#define WINDOWS 0

void printosinfo() {
  printf("Info about your os:\n");

  #if (LINUX > 0)
  printf("You are under linux\n");
  #endif

  #if WINDOWS == 1
  printf("You are under Windows\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}