#include "threads.h"

int threadscount = 0;
static int staticglobalvar = 5;

static int foo(void) {
  return 50;
}

int createnewthread() {
  threadscount++;

  foo();

  return threadscount;
}
