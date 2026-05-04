#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList init() {
  LinkedList linkedList = {
    .head = NULL,
    .size = 0
  };

  return linkedList;
}

static Node * createNode(ListType value) {
  Node * node = (Node *)malloc(sizeof(Node));
  if (node == NULL) {
    printf("Error allocating memory \n");
    exit(1);
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
    printf("Index out of bounds!");
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
    printf("Index out of bounds!");
    exit(1);
  }

  if (index == 0) {
    pushFront(list, value);
  } else {
    Node * node = createNode(value);
    Node * prevNode = getNode(list, index-1);
    node->next = prevNode->next;
    prevNode->next = node;
    list->size++;
  }
}

void pushBack(LinkedList * list, ListType value) {
  
}

ListType popFront(LinkedList * list) {
  if (list->size == 0) {
    printf("Cannot delete first element of empty list\n");
    exit(1);
  }
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

void release(LinkedList * list) {

}