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

  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);
  pushBack(&dynArr, 20);
  printDynArr(&dynArr);

  push(&dynArr, 1, 100);
  printDynArr(&dynArr);

  DynArrType lastElement = popBack(&dynArr);
  printf("Last element: %d\n", lastElement);
  printDynArr(&dynArr);

  DynArrType secondElement = pop(&dynArr, 1);
  printf("SecondElement: %d\n", secondElement);
  printDynArr(&dynArr);

  DynArrType firstElement = popFront(&dynArr);
  printf("First element: %d\n", firstElement);
  printDynArr(&dynArr);

  pushBack(&dynArr, 77);
  pushFront(&dynArr, 99);
  printDynArr(&dynArr);

  DynArrType atSecondElement = get(&dynArr, 1);
  printf("At second element: %d\n", atSecondElement);
  printDynArr(&dynArr);

  set(&dynArr, 1, 105);
  printDynArr(&dynArr);

  release(&dynArr);
  printf("Assert release size == 0: %d\n", dynArr.size == 0);
  printf("Assert release capacity == 0: %d\n", dynArr.capacity == 0);
  printf("Assert release buffer == NULL: %d\n", dynArr.buffer == NULL);

  return 0;
}