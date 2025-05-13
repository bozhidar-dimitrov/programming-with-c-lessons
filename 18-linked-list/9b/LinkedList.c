#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList init() {
  LinkedList newList = {
    .head = NULL,
    .size = 0
  };

  return newList;
}

static Node * createNode(ListType value) {
  Node * newNode = malloc(sizeof(Node));
  if (newNode == NULL){
    printf("Error allocating memory\n");
    exit(0);
  }
  newNode->value = value;
  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  Node * newNode = createNode(value);

  newNode->next = list->head;
  list->head = newNode;
  list->size++;
}