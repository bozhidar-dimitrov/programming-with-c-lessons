#include <stdio.h>

//__linux__ - defined if we are under linux
//_WIN32 - defined if are are under windows 32 or windows 64 bit version
//__APPLE__ - defined if we are under MacOS

void printosinfo() {
  printf("This is os info:\n");

  #if defined __linux__
  printf("We are under linux\n");
  #else 
  printf("We are not under linux\n");
  #endif

  #ifdef _WIN32
  printf("We are under Windows\n");
  #else 
  printf("We are not under Windows\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}