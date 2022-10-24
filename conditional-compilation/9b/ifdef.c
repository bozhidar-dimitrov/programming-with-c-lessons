#include <stdio.h>

#define LINUX 1

void printosinfo(void) {
  printf("Info about the current OS:\n");

  #ifdef WINDOWS
  printf("You are under Windows OS\n");
  #endif

  #ifdef LINUX
  printf("You are under Linux OS\n");
  #endif

  #ifndef WINDOWS
  printf("Your are not under Windows\n");
  #endif 
}

int main(void) {
  printosinfo();
  return 0;
}