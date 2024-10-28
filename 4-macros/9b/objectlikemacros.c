#include <stdio.h>

//Macros are written in all caps
#define ARR_SIZE 8
#define PRINT printf("%d ", arr[i]);
#define PRINT_ARR \
  for (int i = 0; i < ARR_SIZE; i++) { \
    PRINT \
  }

int main(void) {

  int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

  PRINT_ARR

  return 0;
}