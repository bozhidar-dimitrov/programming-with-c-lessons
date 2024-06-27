#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

typedef ListType StackType;

typedef struct {
  LinkedList list;
} ListStack;

ListStack initStack();

void pushInStack(ListStack * stack, StackType value);

StackType popFromStack(ListStack * stack);

#endif 