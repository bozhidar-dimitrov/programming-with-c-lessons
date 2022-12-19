#include "thread.h"

#include <stdio.h>

extern int test;
extern int something;

int main(void) {
  createnewthread();
  createnewthread();

  printf("Threads count: %d\n", threadscount);

  //Undefined reference to test:
  //printf("%d \n", test);

  printf("%d\n", something);

  return 0;
}