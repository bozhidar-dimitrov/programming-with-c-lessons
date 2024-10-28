#include <stdio.h>

#define PRINT_ARR \
  for (int i = 0; i < ARR_SIZE; i++) { \
    PRINT \
  }
//All macros in c by convention are written in ALL_CAPS
#define ARR_SIZE 8
#define PRINT printf("%d ", arr[i]);

int main(void) {
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

  PRINT_ARR

  return 0;
}