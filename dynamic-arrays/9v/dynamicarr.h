#ifndef DYNAMICARR_H
#define DYNAMICARR_H

typedef struct {
  int * buffer;
  unsigned int capacity;
  unsigned int size;
} DynamicArray;

DynamicArray init(int capacity);
void pushback(DynamicArray * arr, int value);
int popback(DynamicArray * arr);

void pushfront(DynamicArray * arr, int value);
int popfront(DynamicArray * arr );

void setelement(DynamicArray * arr, int index, int value);
int getelement(DynamicArray * arr, int index);

void release(DynamicArray * arr);

#endif