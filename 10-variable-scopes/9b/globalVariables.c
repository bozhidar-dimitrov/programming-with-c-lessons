#include <stdio.h>
#include "threads.h"

//Global variables that are not initialized explicitly are initialized to 0
int simpleGlobalVariable;

int count = 10;

void incrementGV() {
  simpleGlobalVariable++;
}

void foo() {
  printf("Inside globalVariables.c \n");
}

int main(void) {

  printf("Print global variable: %d\n", simpleGlobalVariable);
  incrementGV();
  printf("Print global variable: %d\n", simpleGlobalVariable);

  createNewThread();
  printf("Number of threads started: %d\n", threadsCount);

  printf("Count in globalVariables.c: %d\n", count);
  printf("Count in threads.c: %d\n", getCount());
  foo();
  
  return 0;
}