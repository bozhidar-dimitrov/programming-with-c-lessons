#include <stdio.h>

//__linux__ - defined if we are under linux
//_WIN32 - defined if are under windows 32/64
//__APPLE__ - defined if under MacOS

void printosinfo(void) {
  printf("Info about the current OS:\n");

  #if defined __linux__
  printf("You are under Linux OS\n");
  #else
  printf("You are not under Linux OS\n");
  #endif

  #ifdef _WIN32
  printf("You are under Windows OS\n");
  #else
  printf("You are not under Windows OS\n");
  #endif

}

int main(void) {
  printosinfo();
  return 0;
}