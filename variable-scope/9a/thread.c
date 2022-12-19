#include "thread.h"

int threadscount = 0;

static int something = 0;

static int createnewthread() {
  threadscount++;

  return threadscount;
}