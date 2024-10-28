#include <stdio.h>

//Object like macro - uses all caps notation

#define ARR_SIZE 6
#define PRINT printf("%d ", arr[i]);
#define PRINT_ARR \
  for (int i = 0; i < ARR_SIZE; i++) { \
    PRINT \
  }

int main(void) {
  int number = 5;
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6};

  PRINT_ARR

  return 0;
}