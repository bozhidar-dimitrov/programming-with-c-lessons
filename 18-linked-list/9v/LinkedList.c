#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList init() {
  LinkedList list = {
    .head = NULL,
    .size = 0
  };

  return list;
}

static Node * createNode(ListType value) {
  Node * node = (Node *)malloc(sizeof(Node));
  if (node == NULL) {
    printf("Error allocating memory\n");
    return 0;
  }

  node->value = value;
  node->next = NULL;

  return node;
}

void pushFront(LinkedList * list, ListType value) {
  Node * newNode = createNode(value);
  newNode->next = list->head;
  list->head = newNode;
  list->size++;
}

Node * getNode(LinkedList * list, uint index) {
  if (index >= list->size) {
    printf("Index out of bounds");
    exit(1);
  }
  Node * current = list->head;
  for (int i = 0; i < index; i++) {
    current = current->next;
  }
  return current;
}

ListType get(LinkedList * list, uint index) {
  Node * node = getNode(list, index);
  return node->value;
}

void push(LinkedList * list, uint index, ListType value) {
  if (index > list->size) {
    printf("Index out of bounds");
    exit(1);
  }
  if (index == 0) {
    pushFront(list, value);
  } else {
    Node * newNode = createNode(value);
    Node * prevNode = getNode(list, index-1);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    list->size++;
  }
}

void pushBack(LinkedList * list, ListType value) {
  push(list, list->size, value);
}

ListType popFront(LinkedList * list) {
  Node * nodeToDelete = list->head;
  list->head = nodeToDelete->next;

  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;
  return result;
}

ListType pop(LinkedList * list, uint index) {
  if (index >= list->size) {
    printf("Index out of bounds");
    exit(1);
  }
  if (index == 0) {
    return popFront(list);
  } else {
    Node * prevNode = getNode(list, index - 1);
    Node * nodeToDelete = prevNode->next;
    prevNode->next = nodeToDelete->next;

    ListType result = nodeToDelete->value;
    free(nodeToDelete);
    list->size--;
    return result;
  }
}

ListType popBack(LinkedList * list) {
  return pop(list, list->size-1);
}

void set(LinkedList * list, uint index, ListType value) {
  Node * currentNode = getNode(list, index);
  currentNode->value = value;
}

void release(LinkedList * list) {
  while(list->head != NULL) {
    popFront(list);
  }
}