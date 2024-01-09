#include "threads.h"
#include <stdio.h>

int threadscount = 0;
static int staticglobalvariable = 10;
static void foo() {
  printf("Inside static foo");
}

int createnewthread() {
  printf("Creating a new thread \n");
  threadscount++;
  foo();
  return threadscount;
}