#include <stdio.h>
#include "dynamicarr.h"

void printdynarr(DynamicArray * arr) {
  for (int i = 0; i < arr->size; i++) {
    int currel = getelement(arr, i);
    printf("%d ", currel);
  }
  printf("\n");
}

int main(void) {

  DynamicArray arr = init(3);
  printdynarr(&arr);

  pushback(&arr, 4);
  pushback(&arr, 7);
  pushback(&arr, 5);
  pushback(&arr, 3);
  
  printdynarr(&arr);

  return 0;
}