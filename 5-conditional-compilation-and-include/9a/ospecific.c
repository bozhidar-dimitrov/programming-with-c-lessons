#include <stdio.h>

int main(void) {

  #ifdef _WIN32
  printf("We are under windows \n");
  #elif defined __linux__
  printf("We are under linux \n");
  #elif defined __APPLE__
  printf("We are under MacOS \n");
  #else 
  printf("We are under some other OS \n");
  #endif

  return 0;
}