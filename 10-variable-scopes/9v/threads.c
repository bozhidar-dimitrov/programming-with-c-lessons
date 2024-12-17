#include "threads.h"
#include <stdio.h>

int threadCount = 0;
static int state;

static void foo() {
  printf("Inside threads.c\n");
}

void createNewThread() {
  threadCount++;

  //Calling static function foo:
  foo();
}

int getState() {
  return state;
}

void setState(int newState) {
  state = newState;
}

