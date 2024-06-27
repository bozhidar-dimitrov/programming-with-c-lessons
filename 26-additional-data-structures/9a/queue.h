#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

typedef ListType QueueType;

typedef struct {
  LinkedList list;
} Queue;

Queue initQueue();

void enqueue(Queue * queue, QueueType value);
QueueType dequeue(Queue * queue);

#endif