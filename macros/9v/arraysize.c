#include <stdio.h>

#define ARRAY_SIZE 8
#define NUMBERS 1, 2, \
                3, 4, 5, \
                6, 7, 8

int main(void) {
  //array[8]
  int array[ARRAY_SIZE] = {NUMBERS};

  //i < 8
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d\n", array[i]);
  }
}