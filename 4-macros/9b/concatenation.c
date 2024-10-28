#include <stdio.h>

#define CREATE_NAME(PREDICATE, NAME) PREDICATE ## NAME

int main(void) {

  int infoLog = 5;
  printf("The value of infoLog is %d\n", CREATE_NAME(info, Log));

  return 0;
}