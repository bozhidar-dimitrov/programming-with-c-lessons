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
  newNode->next = NULL;

  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  Node * newNode = createNode(value);

  newNode->next = list->head;
  list->head = newNode;
  list->size++;
}

Node * getNode(LinkedList * list, uint index) {
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
  if (index > list->size) {
    printf("Index out of bounds \n");
    exit(1);
  }

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
  list->size--;

  return result;
}

ListType pop(LinkedList * list, uint index) {

}

ListType popBack(LinkedList * list) {

}

void set(LinkedList * list, uint index, ListType value) {

}

void release(LinkedList * list);