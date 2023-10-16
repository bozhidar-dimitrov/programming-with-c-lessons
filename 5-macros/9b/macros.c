#include <stdio.h>

#define MAX 100
#define SPECIAL_MACRO 5
#define SIZE 6
#define PRINT printf("%d ", array[i]);
#define PRINT_ARRAY \
  for (int i = 0; i < SIZE; i++) { \
    PRINT \
  }

int main(void) {

  //printf("Max is %d", 100);
  printf("Max is %d\n", MAX);

  int array[SIZE] = {1, 2, 3, 4, 5, 6};
  PRINT_ARRAY

  return 0;
}