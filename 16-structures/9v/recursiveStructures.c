#include <stdio.h>

typedef struct node {
  int value;
  struct node * next;
} Node;  

int main(void) {

  Node node1 = {.value = 5, .next = NULL};
  Node node2 = {.value = 1, .next = &node1};

  return 0;
}