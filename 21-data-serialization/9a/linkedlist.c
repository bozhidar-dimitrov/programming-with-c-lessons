#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList init() {
  LinkedList newLinkedList = {
    .head = NULL,
    .size = 0
  };

  return newLinkedList;
}

static struct ListNode * createNode(ListType value) {
  struct ListNode * newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
  if (newNode == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  newNode->value = value;
  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  struct ListNode * newNode = createNode(value);
  newNode->next = list->head;
  list->head = newNode;
  list->size++;
}

void push(LinkedList * list, uint index, ListType value) {
  if (index > list->size) {
    printf("Index out of bounds \n");
    exit(1);
  }
  if (index == 0) {
    pushFront(list, value);
  } else {
    struct ListNode * prevNode = getElement(list, index - 1);
    struct ListNode * newNode = createNode(value);

    newNode->next = prevNode->next;
    prevNode->next = newNode;
    list->size++;
  }
}

void pushBack(LinkedList * list, ListType value) {
  push(list, list->size, value);
}

struct ListNode * getElement(LinkedList * list, uint index) {
  if (index >= list->size) {
    return NULL;
  }

  struct ListNode * currentNode = list->head;
  for (uint i = 0; i < index; i++) {
    currentNode = currentNode->next;
  }
  return currentNode;
}

void setElement(LinkedList * list, uint index, ListType value) {
  struct ListNode * currentNode = getElement(list, index);
  currentNode->value = value;
}

ListType popFront(LinkedList * list) {
  struct ListNode * nodeToDelete = list->head;
  list->head = nodeToDelete->next;

  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;

  return result;
}

ListType pop(LinkedList * list, uint index) {
  if (index == 0) {
    return popFront(list);
  } 

  struct ListNode * prevNode = getElement(list, index-1);
  struct ListNode * nodeToDelete = prevNode->next;

  prevNode->next = nodeToDelete->next;

  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;
  return result;
}

ListType popBack(LinkedList * list) {
  return pop(list, list->size-1);
}

void release(LinkedList * list) {
  while (list->size > 0) {
    popFront(list);
  }
}

void forEach(LinkedList * list, ForeachCallback callback) {
  struct ListNode * currentNode = list->head;
  uint index = 0;
  while (currentNode != NULL) {
    callback(index, currentNode->value);
    currentNode = currentNode->next;
    index++;
  }
}