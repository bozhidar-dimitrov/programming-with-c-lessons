#include <stdio.h>

//#define WINDOWS 1

int main(void) {

  #ifdef WINDOWS
  int c = getch();
  #endif

  //Always compiles - error on Linux:
  int windows = 0;
  if (windows) {
    int c = getch();
  }

  return 0;
}