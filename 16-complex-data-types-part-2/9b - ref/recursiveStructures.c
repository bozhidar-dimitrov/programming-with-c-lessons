#include <stdio.h>

typedef struct node {
  int value;
  struct node * next;
} Node;

int main(void) {

  Node node1 = {5, NULL};
  Node node2 = {6, NULL};

  node1.next = &node2;

  return 0;
}