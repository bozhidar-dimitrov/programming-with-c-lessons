#include <stdio.h>

int main(void) {
  printf("The %s has error on line %d\n", __FILE__, __LINE__);

  printf("The file was compiled on %s at %s\n", __DATE__, __TIME__);

  return 0;
}