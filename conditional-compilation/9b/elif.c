#include <stdio.h>

//__linux__ - defined if we are under linux
//_WIN32 - defined if are under windows 32/64
//__APPLE__ - defined if under MacOS

void printosinfo(void) {
  printf("Info about the current OS:\n");

  #if defined _WIN32
  printf("You are under windows\n");
  #elif defined __linux__
  printf("You are under linux\n");
  #elif defined __APPLE__
  printf("You are under MacOS\n");
  #else 
  printf("Unrecognized OS\n");
  #endif
}

int main(void) {
  printosinfo();
  return 0;
}