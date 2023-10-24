#include <stdio.h>

//#define WINDOWS 1

int main(void) {

  printf("This is OS specific program\n");

  #ifdef WINDOWS
  printf("This is Windows OS\n");
  #endif

  int windows = 1;
  if (windows) {
    printf("This is windows OS");
  }

  printf("This is the end of the program \n");

  return 0;
}