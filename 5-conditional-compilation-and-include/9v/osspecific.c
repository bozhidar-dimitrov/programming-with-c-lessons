#include <stdio.h>

//_WIN32 - defined if we are under windows
//__linux__ - defined if we are under linux
//__APPLE__ - defined if we are under Apple

int main(void) {

  #ifdef _WIN32
  printf("Windows specific code\n");
  #elif defined __linux__
  printf("Linux specific code\n");
  #elif defined __APPLE__
  printf("Apple specific code \n");
  #else
  printf("Some other OS specific code \n");
  #endif

  return 0;
}