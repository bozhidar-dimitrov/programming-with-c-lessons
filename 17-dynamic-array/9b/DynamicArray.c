#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"
#include "util.h"

void assertIndexInBounds(DynamicArray * dynArr, uint index) {
  if (index >= dynArr->size) {
    printf("Index out of bounds");
    exit(1);
  }
}

DynamicArray init(uint capacity) {
  if (capacity < 0) {
    printf("Invalid capacity\n");
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

static void resize(DynamicArray * dynArr, uint newSize) {
  if (newSize > dynArr->capacity ) {
    if (dynArr->capacity == 0) {
      dynArr->capacity = 1;
    }
    while (dynArr->capacity <= newSize) {
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

void push(DynamicArray * dynArr, uint index, DynArrType value) {
  assertIndexInBounds(dynArr, index);
  uint newSize = dynArr->size + 1;
  resize(dynArr, newSize);
  for (int i = newSize - 1; i > index; i--) {
    dynArr->buffer[i] = dynArr->buffer[i-1];
  }
  dynArr->buffer[index] = value;
}

void pushFront(DynamicArray * dynArr, DynArrType value) {
  push(dynArr, 0, value);
}

DynArrType popBack(DynamicArray * dynArr) {
  uint newSize = dynArr->size - 1;
  DynArrType result = dynArr->buffer[newSize];
  resize(dynArr, newSize);
  return result;
}

DynArrType pop(DynamicArray * dynArr, uint index) {
  assertIndexInBounds(dynArr, index);
  uint newSize = dynArr->size - 1;
  DynArrType result = dynArr->buffer[index];
  for (int i = index; i < newSize; i++) {
    dynArr->buffer[i] = dynArr->buffer[i+1];
  }
  resize(dynArr, newSize);
  return result;
}

DynArrType popFront(DynamicArray * dynArr) {
  return pop(dynArr, 0);
}

DynArrType get(DynamicArray * dynArr, uint index) {
  assertIndexInBounds(dynArr, index);
  return dynArr->buffer[index];
}

void set(DynamicArray * dynArr, uint index, DynArrType value) {
  assertIndexInBounds(dynArr, index);
  dynArr->buffer[index] = value;
}

void release(DynamicArray * dynArr) {
  free(dynArr->buffer);
  dynArr->buffer = NULL;
  dynArr->capacity = 0;
  dynArr->size = 0;
}