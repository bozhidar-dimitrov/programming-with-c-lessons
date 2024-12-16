#include <stdio.h>
#include "threads.h"

int coresCount = 10;

int testGlobal() {
  printf("In testGlobal: %d\n", coresCount);
}

int main(void) {

  printf("In function main: %d\n", coresCount);
  testGlobal();

  createNewThread();
  printf("Started threads: %d\n", threadCount);

  return 0;
}