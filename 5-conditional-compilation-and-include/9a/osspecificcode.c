#include <stdio.h>

/*
 _WIN32 - defined under Windows
 __linux__ - defined under linux
 __APPLE__ - defined under MAC OS 
*/

int main(void) {

  #ifdef _WIN32
  printf("Windows specific code \n");
  #elif defined __linux__
  printf("Linux specific code \n");
  #elif defined __APPLE__
  printf("Mac OS specific code \n");
  #else
  printf("This is some other OS code \n");
  #endif

  return 0;
}