#include <stdio.h>

#include "queue.h"

int main(void) {

  ListQueue queue = initQueue();
  
  enqueue(&queue, 1);
  enqueue(&queue, 2);
  enqueue(&queue, 3);

  QueueType first = dequeue(&queue);
  QueueType second = dequeue(&queue);
  QueueType third = dequeue(&queue);

  printf("%lf %lf %lf\n", first, second, third);

  return 0;
}