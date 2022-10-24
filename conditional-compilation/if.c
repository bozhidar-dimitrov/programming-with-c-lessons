#include <stdio.h>

#define WINDOWS 1

void printinfo(void) {
  printf("This is print info command:\n");
  
  #if WINDOWS == 1
  printf("You are under Windows OS\n");
  #endif

  #if WINDOWS == 0
  printf("You are not under Windows\n");
  #endif
}


int main(void) {
  printinfo();
  return 0;
}