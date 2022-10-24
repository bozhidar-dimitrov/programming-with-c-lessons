#include <stdio.h>

#define PRINT(MESSAGE) printf(MESSAGE)
#define PRINT(A) printf("Hello " #A " something")

int main(void) {
  PRINT("Hello, World\n");
  int test = 5;
  PRINT(test); //Hello test something

  return 0;
}