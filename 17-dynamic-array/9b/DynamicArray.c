#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"
#include "util.h"

DynamicArray init(uint capacity) {
  DynamicArray dynArr = {
    .size = 0,
    .capacity = capacity,
    .buffer = NULL
  };

  if (dynArr.capacity > 0) {
    dynArr.buffer = calloc(dynArr.capacity, sizeof(DynArrType));
    ASSERT_ALLOC(dynArr.buffer);
  }

  return dynArr;
}

static void resize(DynamicArray * dynArr, uint newSize){
  uint oldCapacity = dynArr->capacity;
  if (oldCapacity < newSize) {
    if (dynArr->capacity == 0) {
      dynArr->capacity = 1;
    }
    while (dynArr->capacity < newSize) {
      dynArr->capacity *= 2;
    }
  } if (newSize <= oldCapacity / 2) {
    dynArr->capacity = newSize;
  }

  if (dynArr->capacity != oldCapacity) {
    if (dynArr->capacity == 0) {
      free(dynArr->buffer);
      dynArr->buffer == NULL;
    } else {
      DynArrType * temp = realloc(dynArr->buffer, sizeof(DynArrType) * dynArr->capacity);
      ASSERT_ALLOC(temp);
      dynArr->buffer = temp;
    }
  }

  dynArr->size = newSize;
}

void pushBack(DynamicArray * dynArr, DynArrType value) {
  const uint oldSize = dynArr->size;
  const uint newSize = oldSize + 1;
  resize(dynArr, newSize);
  dynArr->buffer[newSize-1] = value;
}

void pushFront(DynamicArray * dynArr, DynArrType value) {

}

void push(DynamicArray * dynArr, uint index, DynArrType value) {
  
}

DynArrType popBack(DynamicArray * dynArr) {
  const uint oldSize = dynArr->size;
  const uint newSize = oldSize - 1;

  DynArrType lastElement = dynArr->buffer[oldSize - 1];
  resize(dynArr, newSize);

  return lastElement;
}

DynArrType popFront(DynamicArray * dynArr) {

  return 0;
}

DynArrType pop(DynamicArray * dynArr, uint index) {

  return 0;
}

DynArrType get(DynamicArray * dynArr, uint index) {
  return 0;
}

void set(DynamicArray * dynArr, uint index, DynArrType value) {

}

void release(DynamicArray * dynArr) {

}