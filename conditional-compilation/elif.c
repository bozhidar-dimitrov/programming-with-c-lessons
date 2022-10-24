#include <stdio.h>

//__linux__ - defined if we are under linux
//_WIN32 - defined if we are under windows 32 / 64
//__APPLE__ - defined if are under MacOS

void printinfo(void) {
  printf("This is print info command:\n");
  
  #if defined __linux__
  printf("We are under linux\n");
  #elif defined _WIN32
  printf("We are under windows");
  #elif defined __APPLE__
  printf("We are under Mac OS");
  #else 
  printf("We are on some other OS");
  #endif

}


int main(void) {
  printinfo();
  return 0;
}