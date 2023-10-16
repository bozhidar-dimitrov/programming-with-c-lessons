#include <stdio.h>
// __FILE__ - string - the current preprocessed file
// __LINE__ - integer - the line of code that contains the macro
// __DATE__ - string - the current date of the preprocessing
// __TIME__ - string - the current time of the preprocessing

int main(void) {

  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}