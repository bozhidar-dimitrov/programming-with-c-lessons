#include <stdio.h>

#define MAX 100
#define HELLO "Something"
#define PRINT_HELLO printf("Hello, World!\n")
#define SIZE 6
#define ELEMENTS 1, 2, 3, 4, 5, 6
#define ARRAY_ELEMENT array[i]
#define PRINT printf("%d ", ARRAY_ELEMENT)
#define PRINT_ARRAY \
  for (int i = 0 ; i < SIZE; i++) { \
    PRINT; \
  }

int main(void) {

  //printf("%d\n", 100);
  printf("%d\n", MAX);

  printf("%s\n", HELLO);
  PRINT_HELLO;

  //int array[5] = ...
  int array[SIZE] = {ELEMENTS};
  PRINT_ARRAY

  return 0;
}