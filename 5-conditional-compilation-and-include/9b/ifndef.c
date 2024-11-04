#include <stdio.h>

int main(void) {


  //If Windows macro is not defined:
  #ifndef WINDOWS
  printf("This is code that doesn't work on Windows \n");
  #endif

  return 0;
}