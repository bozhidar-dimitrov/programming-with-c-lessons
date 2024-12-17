#include "threads.h"
#include <stdio.h>

int threadsCount = 0;

static int state;

static void foo() {
  printf("In file: threads.c\n");
}

void createNewThread() {
  //Logic for creating a new thread ...
  threadsCount++;

  //Calling static function foo:
  foo();
}

int getState() {
  return state;
}

void setState(int newState) {
  state = newState;
}