#include <stdio.h>
#include "dynarr.h"

void printdynarr(DynamicArray *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%d ", getel(arr, i));
  }
  printf("\n");
}

int main(void) {
  DynamicArray arr = init(3);
  printdynarr(&arr);

  pushback(&arr, 5);
  pushback(&arr, 3);
  pushback(&arr, 7);
  pushback(&arr, 1);
  printdynarr(&arr);

  setel(&arr, 1, 11);
  setel(&arr, 7, 13);
  printdynarr(&arr);

  int lastel = popback(&arr);
  printf("Last element: %d \n", lastel);
  printdynarr(&arr);

  push(&arr, 3, 4);
  printdynarr(&arr);

  return 0;
}