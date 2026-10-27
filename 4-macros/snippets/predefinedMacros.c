#include <stdio.h>

int main(void) {

  printf("%s\n", __FILE__);
  printf("%d\n", __LINE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);

  return 0;
}