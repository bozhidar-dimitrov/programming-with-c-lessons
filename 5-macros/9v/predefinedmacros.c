#include <stdio.h>
// __FILE__ - string - the name of the preprocessed file
// __LINE__ - integer - the number of line that is using the macro
// __DATE__ - string - the date of the preprocessing
// __TIME__ - string - the time of the preprocessing

int main(void) {

  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}