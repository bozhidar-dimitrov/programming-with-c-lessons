#include <stdio.h>

/*
  __FILE__ - the name of the current file that is being preprocessed as a string
  __LINE__ - the line number - that is being processed as a int
  __DATE__ - current date as a string
  __TIME__ - current time as a string
 */

int main(void) {

  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}