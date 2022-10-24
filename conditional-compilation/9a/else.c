#include <stdio.h>

//__linux__ - if defined we are under linux
//_WIN32 - if defined we are under windows
//__APPLE__ - if defined we are under MacOS

void printosinfo() {
  printf("Info about your os:\n");

  //#ifdef LINUX == #if defined LINUX
  #if defined __linux__
  printf("You are under linux\n");
  #else
  printf("You are not under linux\n");
  #endif

  #ifdef _WIN32
  printf("You are under windows\n");
  #else
  printf("You are not under windows\n");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}