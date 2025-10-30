#include <stdio.h>

//#define WINDOWS 1

#ifdef WINDOWS
#include <conio.h>
#endif

int windows = 1;

int main(void) {

  #ifdef WINDOWS
  int c = getch();
  printf("We are under Windows \n");
  #endif

  int c = getchar();

  //This code will always reach the compiler.
  if (windows == 1) {
    int c1 = getch();
  }

  return 0;
}