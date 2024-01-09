#include "threads.h"
#include <stdio.h>

int threadscount = 0;
static int staticglobalvariable = 10;
static void bar() {
  printf("Static function \n");
}

int createnewthread() {
  printf("from foo: %d \n", threadscount);
  printf("Creating a new thread \n");
  threadscount++;
  printf("static global: %d \n", staticglobalvariable);
  bar();
  return threadscount;
}