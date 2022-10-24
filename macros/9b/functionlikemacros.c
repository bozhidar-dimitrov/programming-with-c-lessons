#include <stdio.h>

#define OBJECT_LIKE_MACRO printf("Hello, World\n")
#define PRINT() printf("Hello, World 2\n")
#define PRINT_MESSAGE(MESSAGE) printf(MESSAGE)

void print(char * str) {
  printf(str);
}

int main(void) {
  OBJECT_LIKE_MACRO; //printf("Hello, World\n");
  PRINT(); //printf("Hello, World 2\n");
  PRINT_MESSAGE("Hello, World 3\n"); //printf(MESSAGE) => printf("Hello, World 3\n");
  print("Hello, world 4\n");

  return 0;
}