#include <stdio.h>
#include "threads.h"

int threadsCount = 0;

static int count = 0;

static void foo() {
  printf("Inside threads.c \n");
}

void createNewThread() {
  printf("Creating new thread...\n");
  threadsCount++;
  printf("A thread has started!\n");
  foo();
}

int getCount() {
  return count;
}

void setCount(int newValue) {
  count = newValue;
}