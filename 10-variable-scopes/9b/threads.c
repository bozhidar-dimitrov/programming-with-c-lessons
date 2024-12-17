#include "threads.h"
#include <stdio.h>

int threadsCount = 0;

static int sharedState;

static void foo() {
  printf("In threads.c\n");
}

void createNewThread() {
  //Creates new thread ...
  threadsCount++;

  //Calls the static function foo:
  foo();
}

int getSharedState() {
  return sharedState;
}

void setSharedState(int newState) {
  sharedState = newState;
}