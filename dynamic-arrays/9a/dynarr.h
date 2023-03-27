#ifndef DYNARR_H
#define DYNARR_H

typedef struct {
  int * buffer;
  unsigned int capacity;
  unsigned int size;
} DynamicArray;

DynamicArray init(unsigned int capacity);

int getel(DynamicArray * arr, int index);

void setel(DynamicArray * arr, int index, int value);

void pushback(DynamicArray * arr, int value);

int popback(DynamicArray * arr);

void push(DynamicArray * arr, int index, int value);

void pushfront(DynamicArray * arr, int value);

//For homework
void pop(DynamicArray * arr, int index);

//For homework
void popfront(DynamicArray * arr);

void releasedynarr(DynamicArray * arr);

#endif