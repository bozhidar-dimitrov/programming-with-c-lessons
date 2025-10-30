#include <stdio.h>

//Predefined macros:
//__FILE__ - current file being preprocessed - string
//__LINE__ - the line on which the macro is being used - int
//__DATE__ - the current date on which file is being preprocessed - string
//__TIME__ - the current time on which the file is being preprocessed - string

int main(void) {

  printf("%s\n", __FILE__);
  printf("%d\n", __LINE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);

  return 0;
}