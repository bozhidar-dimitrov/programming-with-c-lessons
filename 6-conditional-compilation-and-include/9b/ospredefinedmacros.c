#include <stdio.h>

int main(void) {

  #ifdef _WIN32
  printf("We are under Windows\n");
  #elif defined __linux__
  printf("We are under Linux\n");
  #elif defined __APPLE__
  printf("We are under MacOS");
  #else 
  printf("We under some other operating system\n")
  #endif

  return 0;
}