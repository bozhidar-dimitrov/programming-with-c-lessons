#include <stdio.h>
#include "dynarr.h"

void printdynarr(DynamicArray * arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%d ", getel(arr, i));
  }

  printf("\n");
}

int main(void) {
  DynamicArray arr = init(3);
  printdynarr(&arr);

  pushback(&arr, 5);
  pushback(&arr, 1);
  pushback(&arr, 7);
  pushback(&arr, 3);
  printdynarr(&arr);

  setel(&arr, 1, 2);
  setel(&arr, 7, 9);
  printdynarr(&arr);

  int result = popback(&arr);
  printf("Last element: %d\n", result);
  printdynarr(&arr);

  push(&arr, 2, 11);
  pushfront(&arr, 13);
  printdynarr(&arr);

  return 0;
}