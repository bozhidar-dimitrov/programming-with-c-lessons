#include <stdio.h>

#define BUFFER_SIZE 1024
#define OS_VERSION 2



int main(void) {

  #if BUFFER_SIZE > 512
  printf("This is OS with buffer size greater than 512\n");
  #endif

  #if BUFFER_SIZE > 2048 && OS_VERSION == 2
  printf("This is OS with buffer size greater than 2048 and having os version equal to 2\n");
  #endif

  int buffersize = 1024;
  if (buffersize > 512) {
    printf("This is OS with buffer size greater than 512\n");
  }

  if (buffersize > 2048) {
    printf("This is OS with buffer size greater than 2048\n");
  }

  #ifdef WINDOWS
    int c = getch();
    printf("the symbol is %c\n", c);
  #endif

  return 0;
}