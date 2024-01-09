#include "threads.h"
#include <stdio.h>

int threadscount = 0;
static int staticglobal = 10;

static void foo() {
  printf("Calling foo from threads.c\n");
}

int createnewthread() {
  printf("New thread created \n");
  staticglobal++;
  threadscount++;
  foo();
  return threadscount;
}