#include <stdio.h>

int main() {
  printf("Error in file %s on line %d\n", __FILE__, __LINE__);

  printf("File preprocess on %s at %s\n", __DATE__, __TIME__);
  return 0;
}