#include "threads.h"

int threadscount = 0;

//Only visible in this file
static int newvar = 7;

extern int createnewthread() {
  threadscount++;

  newvar++;

  return threadscount;
}

static int foo() {
  return 5;
}