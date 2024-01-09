#include <stdio.h>
#include "threads.h"

extern int staticglobalvariable;

void bar() {
  printf("Static function in main\n");
}

int main(void) {
  createnewthread();

  printf("Threads count: %d\n", threadscount);
  //printf("static global: %d\n", staticglobalvariable); - throws linker error

  return 0;
}