#include <stdio.h>
//#define WINDOWS 1

#ifdef WINDOWS
#include <conio.h>
#endif


int main(void) {

  #ifdef WINDOWS
  printf("We are under windows!\n");
  int c = getch
  #endif

  int windows = 1;
  if (windows) {
    printf("We are under Windows!");
  }

  return 0;
}