#include <stdio.h>
#include "DynamicArray.h"

void printDynArr(DynamicArray * dynArr) {
  for (int i = 0; i < dynArr->size; i++) {
    printf("%d ", dynArr->buffer[i]);
  }
  printf("\n");
}

int main(void) {

  uint initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  printf("Assert initial size == 0: %d\n", dynArr.size == 0);
  printf("Assert initial capacity == capacity: %d\n", dynArr.capacity == initialCapacity);
  printf("Assert initial buffer != NULL, when capacity != 0: %d\n", dynArr.buffer != NULL);

  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);
  pushBack(&dynArr, 20);
  printDynArr(&dynArr);

  push(&dynArr, 1, 100);
  printDynArr(&dynArr);

  pushFront(&dynArr, 7);
  printDynArr(&dynArr);

  DynArrType lastElement = popBack(&dynArr);
  printf("Last element: %d\n", lastElement);
  printDynArr(&dynArr);

  DynArrType thirdElement = pop(&dynArr, 2);
  printf("Third element: %d\n", thirdElement);
  printDynArr(&dynArr);

  DynArrType secondElement = get(&dynArr, 1);
  printf("Second element: %d\n", secondElement);
  printDynArr(&dynArr);

  set(&dynArr, 1, 50);
  printDynArr(&dynArr);

  release(&dynArr);
  printf("Assert release size == 0: %d\n", dynArr.size == 0);
  printf("Assert release capacity == 0: %d\n", dynArr.capacity == 0);
  printf("Assert release buffer == 0: %d\n", dynArr.buffer == NULL);

  return 0;
}