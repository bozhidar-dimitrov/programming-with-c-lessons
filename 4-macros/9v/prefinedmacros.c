#include <stdio.h>

//Normal macro
#define NAME "Nikola"

//__FILE__ - the name of the file that is being preprocessed
//__LINE__ - the number of the line that is preprocessed
//__DATE__ - the current date
//__TIME__ - the current time

int main(void) {

  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}