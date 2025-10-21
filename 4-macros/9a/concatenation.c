#include <stdio.h>

#define CREATE_NAME(PREFIX, NAME) PREFIX ## NAME

void warningLog() {
  printf("Some warning \n");
}

int main(void) {

  int infoLog = 5;

  printf("%d\n", infoLog);
  printf("%d\n", CREATE_NAME(info, Log));

  CREATE_NAME(warning, Log)();

  return 0;
}