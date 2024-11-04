#include <stdio.h>


int main(void) {
  char c = '\0';
  #ifdef WINDOWS
  c = getch();
  #else
  c = getc(stdin);
  #endif

  return 0;
}