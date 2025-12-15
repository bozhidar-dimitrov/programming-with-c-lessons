#include <stdio.h>
#include "threads.h"

int threadsCount = 0;

//Only visible in threads.c
static int count = 10;

static void foo() {
  printf("Inside threads.c \n");
}

void createNewThread() {
  printf("Creating new thread ...\n");
  printf("Thread created!\n");
  foo();
  threadsCount++;
}

void setCount(int a) {
  count = a;
}

int getCount() {
  return count;
}