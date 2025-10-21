#include <stdio.h>

//macro chaining:

#define SIZE 8
#define PRINT printf("%d ", arr[i]);

#define PRINT_ARRAY \
  for (int i = 0; i < SIZE; i++) { \
     PRINT \
  } \
  printf("\n");

int main(void) {

  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

  PRINT_ARRAY

  PRINT_ARRAY

  return 0;
}