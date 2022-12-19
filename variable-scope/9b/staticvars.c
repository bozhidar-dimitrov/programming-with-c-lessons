#include <stdio.h>

int initialize() {
  return 50;
}

void countcalls(void) {
  static int count = 0;

  //Not allowed - initialize is not a constant
  //static int test = initialize();

  count++;

  printf("Count: %d \n", count);
}

int main(void) {

  countcalls();
  countcalls();
  countcalls();

  return 0;
}