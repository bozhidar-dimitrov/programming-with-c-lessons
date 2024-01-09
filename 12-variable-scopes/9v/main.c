#include <stdio.h>
#include "threads.h"

void foo() {
  printf("Calling foo from main:\n");
}

extern int staticglobalvariable;
int main(void) {

  printf("Threads count: %d\n", threadscount);
  createnewthread();
  printf("Threads count: %d\n", threadscount);
  //printf("Static: %d\n", staticglobalvariable); => throws linker error
  foo();
  return 0;
}