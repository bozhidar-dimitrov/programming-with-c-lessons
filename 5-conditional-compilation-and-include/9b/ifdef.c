#include <stdio.h>

//#define WINDOWS 1
#define LINUX 1

#ifdef WINDOWS
#include <conio.h>
#endif

int main(void) {

  char c;
  #ifdef WINDOWS
  c = getch();
  #endif

  int windows = 0;
  if (windows) {
    //Doesn't work under linux
    //c = getch();
  } 
  #ifdef LINUX
  printf("Linux specific code\n");
  #endif

  return 0;
}