#include <stdio.h>
#include "threads.h"

//Initialized to 0 in contrast of local variables that have random value
int globalVar;

int count = 10;

int incrementGV() {
  globalVar++;
}

void foo() {
  printf("This is inside globalVariables.c\n");
}

int main(void) {

  printf("Global var: %d\n", globalVar);
  incrementGV();
  printf("Global var: %d\n", globalVar);

  createNewThread();

  printf("Threads created: %d\n", threadsCount);

  printf("Count from globalVariables.c: %d\n", count);
  printf("Count from threads.c: %d\n", getCount());

  foo();

  return 0;
}