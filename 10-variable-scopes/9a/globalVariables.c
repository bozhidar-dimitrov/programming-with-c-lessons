#include <stdio.h>
#include "threads.h"

//Uninitialized global variable are automatically initialized to 0
int simpleGlobalVariable;

void incrementGlobalVariable() {
  simpleGlobalVariable++;
}

int main(void) {
  int uninitializedLocalVariable;
  //This is so called "garbage value" - random value
  printf("Local variable: %d\n", uninitializedLocalVariable);

  printf("Global varable: %d\n", simpleGlobalVariable);
  incrementGlobalVariable();
  printf("Global varable: %d\n", simpleGlobalVariable);

  createNewThread();

  printf("Running threads: %d\n", threadsCount);
  return 0;
}