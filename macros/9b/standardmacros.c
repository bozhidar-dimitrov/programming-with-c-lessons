#include <stdio.h>

int main(void) {
  printf("There is error in file: %s at line %d", __FILE__, __LINE__);

  printf("The file was processed on %s at %s", __DATE__, __TIME__);
  return 0;
}