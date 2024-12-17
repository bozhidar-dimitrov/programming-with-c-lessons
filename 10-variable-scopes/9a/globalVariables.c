#include <stdio.h>
#include "threads.h"

int coresCount = 4;

void printCoresCount() {
  printf("In printCoresCount %d\n", coresCount);
}

void foo() {
  printf("In globalVariables.c \n");
}

int main(void) {

  printf("In main functions: %d\n", coresCount);
  printCoresCount();

  createNewThread();
  printf("Threads count: %d\n", threadsCount);

  setState(10);
  printf("New state: %d\n", getState());

  foo();

  return 0;
}