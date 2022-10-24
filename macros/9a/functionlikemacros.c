#include <stdio.h>

#define OBJECT_LIKE_MACROS printf("Hello world 1\n")
#define PRINT() printf("Hello, world 2\n")
#define PRINT_MESSAGE(MESSAGE) printf(MESSAGE)

void print(char * message) {
  printf(message);
}

int main(void) {
  OBJECT_LIKE_MACROS; //printf("Hello world 1\n");
  PRINT(); //printf("Hello, world 2\n");
  PRINT_MESSAGE("Hello, world 3\n"); //printf(MESSAGE); => printf("Hello, world 3\n");
  print("Hello, world 4\n");
  return 0;
}