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

  push(&dynArr, 1, 100);
  printDynArr(&dynArr);

  pushFront(&dynArr, 77);
  printDynArr(&dynArr);

  DynArrType lastElement = popBack(&dynArr);
  printf("Last element %d\n", lastElement);
  printDynArr(&dynArr);

  DynArrType thirdElement = pop(&dynArr, 2);
  printf("Third element %d\n", thirdElement);
  printDynArr(&dynArr);

  DynArrType firstElement = popFront(&dynArr);
  printf("First element %d\n", firstElement);
  printDynArr(&dynArr);

  DynArrType atSecondElement = get(&dynArr, 1);
  printf("Second element %d\n", atSecondElement);
  printDynArr(&dynArr);

  set(&dynArr, 1, 105);
  printDynArr(&dynArr);

  release(&dynArr);
  
  printf("Release size: %u\n", dynArr.size);
  printf("Release capacity: %u\n", dynArr.capacity);
  printf("New array buffer == NULL: %u\n", dynArr.buffer == NULL);

  return 0;
}