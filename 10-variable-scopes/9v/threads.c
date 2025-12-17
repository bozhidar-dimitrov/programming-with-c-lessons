#include <stdio.h>
#include "threads.h"

int threadsCount;

static int count;

static void foo() {
  printf("This is inside threads.c\n");
}

void createNewThread() {
  printf("Creating a new thread ...\n");
  threadsCount++;
  printf("A thread has been created!\n");
  foo();
}

void setCount(int countNewValue) {
  count = countNewValue;
}

int getCount() {
  return count;
}