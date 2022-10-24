#include <stdio.h>

int main(void) {
  printf("There is error in %s at line:%d \n", __FILE__, __LINE__);

  printf("The program was preprocessed on %s at %s", __DATE__, __TIME__);
  return 0;
}