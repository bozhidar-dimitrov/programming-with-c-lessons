#include <stdio.h>

//_WIN32 - defined if we are under windows
//__linux__ - defined if are under linux
//__APPLE__ - defined if are under MAC OS

int main(void) {

  #ifdef _WIN32
  printf("This is windows specific code\n");
  #elif defined __linux__
  printf("This is Linux specific code\n");
  #elif defined __APPLE__
  printf("This is Apple specific code\n");
  #else
  printf("We are under some other OS \n");
  #endif

  return 0;
}