#include <stdio.h>

#define ARRAY_SIZE 6
#define PRINT printf("%d ", arr[i])

//Macro chaining and using \ to make object like macro - multiline
#define PRINT_ARRAY \
  for (int i = 0; i < ARRAY_SIZE; i++) { \
    PRINT; \
  } \
  printf("\n");

int main(void) {

  int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6};

  PRINT_ARRAY

  return 0;
}