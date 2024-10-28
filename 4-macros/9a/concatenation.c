#include <stdio.h>

#define CREATE_NAME(PREDICATE, NAME) PREDICATE ## NAME

void printHello() {
  printf("Hello, World\n");
}

int main(void) {

  int infoLog = 5;
  printf("The value of infoLog is: %d\n", CREATE_NAME(info, Log));
  CREATE_NAME(print, Hello)();

  return 0;
}