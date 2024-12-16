#include <stdio.h>
#include "threads.h"

int coresCount = 4;

void printCores() {
  printf("In print cores: %d\n", coresCount);
}

int main(void) {
  printf("In function main: %d\n", coresCount);
  printCores();

  createNewThread();
  printf("Threads count: %d\n", threadsCount);

  return 0;
}