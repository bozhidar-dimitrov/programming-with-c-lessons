#include <stdio.h>

//__FILE__ - the name of the file being preprocessed
//__LINE__ - the number of the line where the this macro is being used
//__DATE__ - the date on which the file is being preprocessed
//__TIME__ - the time of which the file is being preprocessed

int main(void) {

  printf("%s\n", __FILE__);
  printf("%d\n", __LINE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);

  return 0;
}