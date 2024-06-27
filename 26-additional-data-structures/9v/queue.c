#include "queue.h"

ListQueue initQueue() {
  LinkedList list = init();
  ListQueue queue = {
    .list = list
  };
  return queue;
}

void enqueue(ListQueue * queue, QueueType value) {
  pushBack(&(queue->list), value);
}

QueueType dequeue(ListQueue * queue) {
  return popFront(&(queue->list));
}