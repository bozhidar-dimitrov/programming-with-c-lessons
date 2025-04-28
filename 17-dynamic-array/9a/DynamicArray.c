#include <stdio.h>
#include <stdlib.h>

#include "util.h"
#include "DynamicArray.h"

DynamicArray init(uint capacity) {
  if (capacity < 0) {
    printf("Invalid capacity\n");
    exit(0);
  }

  DynamicArray newArray = {
    .size = 0,
    .capacity = capacity,
    .buffer = NULL
  };

  if (newArray.capacity > 0) {
    newArray.buffer = calloc(newArray.capacity, sizeof(DynArrType));
    ASSERT_ALLOC(newArray.buffer);
  }

  return newArray;
}

static void resize(DynamicArray * dynArr, uint newSize) {
  if (newSize > dynArr->capacity) {
    if (dynArr->capacity == 0) {
      dynArr->capacity = 1;
    }

    while (dynArr->capacity < newSize) {
      dynArr->capacity *= 2;
    }
  } else if (newSize <= dynArr->capacity / 2) {
    dynArr->capacity = newSize;
  }

  if (dynArr->capacity == 0) {
    free(dynArr->buffer);
    dynArr->buffer = NULL;
  } else {
    DynArrType * temp = realloc(dynArr->buffer, dynArr->capacity * sizeof(DynArrType));
    ASSERT_ALLOC(temp);
    dynArr->buffer = temp;
  }

  dynArr->size = newSize;
}

void pushBack(DynamicArray * dynArr, DynArrType value) {
  uint newSize = dynArr->size + 1;
  resize(dynArr, newSize);
  dynArr->buffer[newSize-1] = value;
}