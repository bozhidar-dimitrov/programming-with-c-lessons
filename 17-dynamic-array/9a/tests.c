#include <stdio.h>
#include "DynamicArray.h"

void printDynArr(DynamicArray * dynArr) {
  for (int i = 0; i < dynArr->size; i++) {
    printf("%d ", dynArr->buffer[i]);
  }
  printf("\n");
}

int main(void) {

  printf("DynamicArray tests:\n");
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  printf("Assert initial size == 0: %d\n", dynArr.size == 0);
  printf("Assert correct initial capacity initialCapacity: %d\n", dynArr.capacity == initialCapacity);
  printf("Assert initial buffer not NULL: %d\n", dynArr.buffer != NULL);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 6);
  pushBack(&dynArr, 8);
  //We expect here elements 5,6,8

  printf("We have 5,6,8 in buffer: %d \n", 
    dynArr.buffer[0] == 5 
    && dynArr.buffer[1] == 6
    && dynArr.buffer[2] == 8
  );

  return 0;
}