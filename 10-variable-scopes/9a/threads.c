#include <stdio.h>
#include "threads.h"

int threadsCount = 0;

void createNewThread() {
  printf("Creating new thread ...\n");
  printf("Thread created!\n");
  threadsCount++;
}