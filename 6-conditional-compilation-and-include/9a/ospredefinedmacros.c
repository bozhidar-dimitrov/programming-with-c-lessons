#include <stdio.h>

int main(void) {

  printf("This os specific code:");

  #ifdef _WIN32
  printf("We are under Windows\n");
  #elif defined __linux__
  printf("We are under Linux\n");
  #elif defined __APPLE__
  printf("We are under apple device\n");
  #else 
  printf("We are on some other OS\n");
  #endif

  return 0;
}