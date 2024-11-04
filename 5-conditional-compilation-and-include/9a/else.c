#include <stdio.h>

#ifdef WINDOWS
#include <conio.h>
#endif

int main(void) {
  char c = '\0';
  #ifdef WINDOWS
  c = getch();
  #else
  c = getc(stdin);
  #endif

  //Alternative code:
  #if defined WINDOWS
  c = getch();
  #else
  c = getc(stdin);
  #endif

  return 0;
}