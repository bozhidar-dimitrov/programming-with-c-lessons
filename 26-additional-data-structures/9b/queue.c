#include "queue.h"

ListQueue initQueue() {
  LinkedList newList = init();
  ListQueue queue = {
    .list = newList
  };

  return queue;
}

void enqueue(ListQueue * queue, QueueType value) {
  pushBack(&(queue->list), value);
}

QueueType dequeue(ListQueue * queue) {
  return popFront(&(queue->list));
}