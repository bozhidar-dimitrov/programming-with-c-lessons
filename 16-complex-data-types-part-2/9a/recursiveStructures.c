#include <stdio.h>

typedef struct node {
  int value;
  struct node * next;
} Node;

int main(void) {

  Node node1 = {15, NULL};
  Node node2 = {20, NULL};
  Node node3 = {30, NULL};

  node1.next = &node2;
  node2.next = &node3;
  //node1 -> node2 -> node3

  return 0;
}