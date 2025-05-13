#include <stdio.h>

#include "LinkedList.h"

LinkedList init() {
  LinkedList list = {
    .head = NULL,
    .size = 0
  };

  return list;
}

struct Node * createNode(ListType value) {
  struct Node * newNode = malloc(sizeof(struct Node));
  if (newNode == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }
  newNode->value = value;
  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  struct Node * newNode = createNode(value);
  newNode->next = list->head;
  list->head = newNode;
  list->size++;
}