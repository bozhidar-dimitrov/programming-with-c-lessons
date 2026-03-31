#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef int DynArrType;
typedef unsigned int uint;

typedef struct {
  DynArrType * buffer;
  uint size;
  uint capacity;
} DynamicArray;

DynamicArray init(uint capacity);

void pushBack(DynamicArray * dynArr, DynArrType value);
void pushFront(DynamicArray * dynArr, DynArrType value);
void push(DynamicArray * dynArr, uint index, DynArrType value);

DynArrType popBack(DynamicArray * dynArr);
DynArrType popFront(DynamicArray * dynArr);
DynArrType pop(DynamicArray * dynArr, uint index);

DynArrType get(DynamicArray * dynArr, uint index);
void set(DynamicArray * dynArr, uint index, DynArrType value);

void release(DynamicArray * dynArr);

#endif