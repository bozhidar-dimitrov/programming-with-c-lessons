#include <stdio.h>

//__linux__ - if defined we are under linux
//_WIN32 - if defined we are under windows
//__APPLE__ - if defined we are under MacOS

void printosinfo() {
  printf("Info about your os:\n");

  #if defined _WIN32
  printf("We are under windows");
  #elif defined __linux__
  printf("We are under linux");
  #elif defined __APPLE__
  printf("We are under macOS");
  #else 
  printf("We are under some other os");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}