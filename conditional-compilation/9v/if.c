#include <stdio.h>

#define WINDOWS 0
#define LINUX 1

void printosinfo() {
  printf("This is os info:\n");

  #if WINDOWS == 0
  printf("We are not under Windows\n");
  #endif

  #if LINUX == 1
  printf("We are under Linux\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}