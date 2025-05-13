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

void assertIndexInBounds(LinkedList * list, uint index) {
  if (list->size <= index) {
    printf("Index out of bounds\n");
    exit(1);
  }
}

static Node * createNode(ListType value) {
  Node * newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Error allocating memory \n");
    exit(1);
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

Node * getNode(LinkedList * list, uint index) {
  assertIndexInBounds(list, index);
  Node * currentNode = list->head;
  for (int i = 0; i < index; i++) {
    currentNode = currentNode->next;
  }
  return currentNode;
}

ListType get(LinkedList * list, uint index) {
  Node * currentNode = getNode(list, index);
  return currentNode->value;
}

void push(LinkedList * list, uint index, ListType value) {
  if (index == 0) {
    pushFront(list, value);
  } else {
    Node * prevNode = getNode(list, index - 1);
    Node * newNode = createNode(value);

    newNode->next = prevNode->next;
    prevNode->next = newNode;
    list->size++;
  }
  
}

void pushBack(LinkedList * list, ListType value) {

}

ListType popFront(LinkedList * list) {
  Node * nodeToDelete = list->head;
  list->head = nodeToDelete->next;

  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  return result;
}

void set(LinkedList * list, uint index, ListType value) {

}

ListType popBack(LinkedList * list) {

}

ListType pop(LinkedList * list, uint index) {

}

void release(LinkedList * list) {
  
}