#include <stdio.h>

#define WINDOWS 1

#ifdef WINDOWS
#include <conio.h>
#endif

int windows = 1;

int main(void) {

  #ifdef WINDOWS
  printf("This is code that executes only under Windows\n");
  int c = getch();
  #endif


  if (windows) {
    printf("This is code that executes only under Windows\n");
  }

  return 0;
}