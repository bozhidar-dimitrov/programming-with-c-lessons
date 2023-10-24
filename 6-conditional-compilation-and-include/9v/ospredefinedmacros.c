#include <stdio.h>

int main(void) {

  #ifdef _WIN32
  printf("This is Windows specific code \n");
  #elif defined __linux__
  printf("This is linux specific code \n");
  #elif defined __APPLE__
  printf("This is MacOS specific code \n");
  #else 
  printf("We are on some other OS\n");
  #endif

  return 0;
}