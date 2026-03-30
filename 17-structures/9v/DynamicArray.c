#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"
#include "util.h"

DynamicArray init(uint capacity) {
  DynamicArray dynArray = {
    .size = 0,
    .capacity = capacity,
    .buffer = NULL
  };

  if (dynArray.capacity > 0) {
    dynArray.buffer = (DynArrType *)(dynArray.capacity, sizeof(DynArrType));
    ASSERT_ALLOC(dynArray.buffer);
  }
  
  return dynArray;
}

void pushBack(DynamicArray * dynArr, DynArrType value) {

}
void pushFront(DynamicArray * dynArr, DynArrType value) {

}

void push(DynamicArray * dynArr, uint index, DynArrType value) {

}

DynArrType popBack(DynamicArray * dynArr) {
  return 0;
}

DynArrType popFront(DynamicArray * dynArr){
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