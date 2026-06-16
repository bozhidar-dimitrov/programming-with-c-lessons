#ifndef __STACK_H__
#define __STACK_H__

#include "DynamicArray.h"

typedef int StackType;
typedef unsigned int uint;
typedef DynamicArray StackCollection;

typedef struct {
  StackCollection stackCollection;
} Stack;

void push(Stack * stack, StackType value);

StackType pop(Stack * stack);

#endif // __STACK_H__
