#include <stdio.h>

#define OBJECT_LIKE_PRINT printf("Hello, world\n")
#define SIMPLE_PRINT() printf("Hello, world\n")
#define PRINT(MESSAGE) printf(MESSAGE)

int main(void) {
  OBJECT_LIKE_PRINT;
  SIMPLE_PRINT();
  PRINT("Hello, World\n"); //printf(MESSAGE) => printf("Hello, World\n")
  return 0;
}