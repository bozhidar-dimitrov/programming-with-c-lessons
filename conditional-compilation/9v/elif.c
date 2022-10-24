#include <stdio.h>

//__linux__ - defined if we are under linux
//_WIN32 - defined if are are under windows 32 or windows 64 bit version
//__APPLE__ - defined if we are under MacOS

void printosinfo() {
  printf("This is os info:\n");

  #if defined _WIN32
  printf("We are under windows\n");
  #elif defined __linux__
  printf("We are under linux\n");
  #elif defined __APPLE__
  printf("We are under MacOS\n")
  #else 
  printf("We are under some other OS");
  #endif
}

int main(void) {
  printosinfo();

  return 0;
}