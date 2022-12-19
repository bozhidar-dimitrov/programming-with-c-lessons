#include "threads.h"

int threadscount = 0;

int createnewthread() {
  threadscount++;
  
  return threadscount;
}

static int foo() {
  printf("Something\n");
  return 0;
}