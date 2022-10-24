#include <stdio.h>

#define ARRAY_SIZE 7
#define NUMBERS 1, \
                2, 3, \
                4, 5, 6, \
                7

int main(void) {
  int array[ARRAY_SIZE] = {NUMBERS};

  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}