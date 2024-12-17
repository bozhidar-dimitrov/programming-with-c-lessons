#include <stdio.h>
#include "threads.h"

int coresCount = 4;

void foo() {
  printf("In globalVariables.c \n");
}

void printCores() {
  printf("In print cores: %d\n", coresCount);
}

int main(void) {
  printf("In function main: %d\n", coresCount);
  printCores();

  createNewThread();
  printf("Threads count: %d\n", threadsCount);

  setSharedState(10);
  printf("New state: %d\n", getSharedState());

  foo();

  return 0;
}