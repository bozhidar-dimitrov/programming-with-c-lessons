#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

typedef ListType QueueType;

typedef struct {
  LinkedList list;
} ListQueue;

ListQueue initQueue();

void enqueue(ListQueue * stack, QueueType value);

QueueType dequeue(ListQueue * stack);


#endif