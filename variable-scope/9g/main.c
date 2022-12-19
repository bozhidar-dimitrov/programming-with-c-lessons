#include <stdio.h>

#include "threads.h"

extern int test;

int foo() {
  printf("Another thing \n");
  return 0;
}

int main(void) {
  createnewthread();
  createnewthread();

  printf("%d\n", threadscount);

  //Doesn't work - the linker cannot find the reference
  // printf("%d\n", test);

  return 0;
}