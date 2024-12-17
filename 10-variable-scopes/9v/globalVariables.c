#include <stdio.h>
#include "threads.h"

int coresCount = 10;

int testGlobal() {
  printf("In testGlobal: %d\n", coresCount);
}

void foo() {
  printf("In globalVariables.c\n");
}

int main(void) {

  printf("In function main: %d\n", coresCount);
  testGlobal();

  createNewThread();
  printf("Started threads: %d\n", threadCount);

  setState(10);
  printf("New state: %d\n", getState());

  foo();

  return 0;
}