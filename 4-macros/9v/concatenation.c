#include <stdio.h>

#define CREATE_NAME(PREDICATE, NAME) PREDICATE ## NAME
#define DEBUG_INT(X) printf("The value of " #X " is %d\n", X);

int main(void) {

  int infoLog = 5;
  DEBUG_INT(CREATE_NAME(info, Log));

  return 0;
}