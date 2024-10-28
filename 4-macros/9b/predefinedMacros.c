#include <stdio.h>

/*
  __FILE__ - a string with the name of the file that is being preprocessed
  __LINE__ - the current line number as an int
  __DATE__ - the current date as a string
  __TIME__ - the current time as a string
 */


int main(void) {

  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}