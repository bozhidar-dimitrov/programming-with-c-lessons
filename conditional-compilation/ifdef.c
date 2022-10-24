#include <stdio.h>

#define WINDOWS 0

void printinfo(void) {
  printf("This is print info command:\n");
  
  #ifdef WINDOWS
  printf("You are under Windows OS\n");
  #endif

  #ifndef WINDOWS
  printf("You are not under Windows");
  #endif
}


int main(void) {
  printinfo();
  return 0;
}