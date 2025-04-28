#include <stdio.h>
#include "DynamicArray.h"

int main(void) {

  printf("DynamicArray tests:\n");
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  printf("Assert initial size == 0: %d\n", dynArr.size == 0);
  printf("Assert correct initial capacity initialCapacity: %d\n", dynArr.capacity == initialCapacity);
  printf("Assert initial buffer not NULL: %d\n", dynArr.buffer != NULL);

  return 0;
}