#include <stdio.h>
#include "threads.h"

void foo() {
  printf("Calling foo from main program:\n");
}

int main(void) {
  int x = createnewthread();
  printf("New number of threads: %d\n", threadscount);
  foo();
  return 0;
}