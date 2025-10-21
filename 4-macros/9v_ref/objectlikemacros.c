#include <stdio.h>

#define SIZE 8
#define PRINT printf("%d ", arr[i])

//Macro chaining:
#define PRINT_ARRAY \
  for (int i = 0; i < SIZE; i++) { \
    PRINT; \
  } \
  printf("\n");

const int size = 8;

int main(void) {

  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

  PRINT_ARRAY

  PRINT_ARRAY

  return 0;
}