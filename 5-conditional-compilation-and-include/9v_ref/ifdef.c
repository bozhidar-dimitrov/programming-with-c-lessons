#include <stdio.h>

#define WINDOWS 1

#ifdef WINDOWS
#include <conio.h>
#endif

int windows = 0;

int main(void) {

  //If Windows ->
  if (windows == 1) {
    #ifdef WINDOWS
    int c = getch();
    #endif
  }

  //If Linux ->
  if (windows == 0) {
    int c = getchar();
  }

  return 0;
}