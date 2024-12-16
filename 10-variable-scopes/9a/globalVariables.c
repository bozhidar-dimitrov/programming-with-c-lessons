#include <stdio.h>
#include "threads.h"

int coresCount = 4;

void printCoresCount() {
  printf("In printCoresCount %d\n", coresCount);
}

int main(void) {

  printf("In main functions: %d\n", coresCount);
  printCoresCount();

  createNewThread();
  printf("Threads count: %d\n", threadsCount);

  return 0;
}