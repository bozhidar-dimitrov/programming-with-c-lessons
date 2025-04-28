#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"
#include "util.h"

DynamicArray init(uint capacity) {
  if (capacity < 0) {
    printf("Invalid capacity \n");
    exit(1);
  }

  DynamicArray newDynamicArray = {
    .size = 0,
    .capacity = capacity,
    .buffer = NULL
  };

  if (newDynamicArray.capacity > 0) {
    newDynamicArray.buffer = calloc(newDynamicArray.capacity, sizeof(DynArrType));
    ASSERT_ALLOC(newDynamicArray.buffer);
  }

  return newDynamicArray;
}