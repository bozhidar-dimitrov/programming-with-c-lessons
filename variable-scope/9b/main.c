#include "threads.h"

#include <stdio.h>

extern int test;
extern int staticglobalvar;

int foo(void) {
  return 20;
}

int main(void) {
  createnewthread();
  createnewthread();

  printf("Threads count: %d\n", threadscount);

  //Linker throws undefined reference to test
  //printf("%d \n", test);

  //Linker cannot see static variables from other files
  //printf("%d \n", staticglobalvar);

  return 0;
}