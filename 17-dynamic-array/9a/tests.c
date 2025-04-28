#include <stdio.h>
#include "DynamicArray.h"

void printDynArr(DynamicArray * dynArr) {
  for (int i = 0; i < dynArr->size; i++) {
    printf("%u ", dynArr->buffer[i]);
  }
  printf("\n");
}

int main(void) {

  DynamicArray dynArr = init(2);

  printf("New array size: %u\n", dynArr.size);
  printf("New array capacity: %u\n", dynArr.capacity);
  printf("New array buffer != NULL: %u\n", dynArr.buffer != NULL);

  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);
  pushBack(&dynArr, 20);

  printDynArr(&dynArr);

  return 0;
}