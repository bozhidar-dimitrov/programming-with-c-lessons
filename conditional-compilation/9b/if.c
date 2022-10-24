#include <stdio.h>

#define WINDOWS 0
#define LINUX 1

void printosinfo(void) {
  printf("Info about the current OS:\n");

  #if WINDOWS
  printf("You are under Windows OS\n");
  #endif

  #if LINUX >= 1
  printf("You are under Linux OS\n");
  #endif

  #if WINDOWS == 0
  printf("Your are not under Windows\n");
  #endif 
}

int main(void) {
  printosinfo();
  return 0;
}