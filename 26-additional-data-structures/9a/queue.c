#include <queue.h>

Queue initQueue() {
  LinkedList newList = init();
  Queue queue = {
    list:newList
  };

  return queue;
}

void enqueue(Queue * queue, QueueType value) {
  pushBack(&(queue->list), value);
}

QueueType dequeue(Queue * queue) {
  return popFront(&(queue->list));
}
