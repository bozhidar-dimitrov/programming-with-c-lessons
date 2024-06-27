#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList init() {
  LinkedList newLinkedList = {
    .head = NULL,
    .tail = NULL,
    .size = 0
  };

  return newLinkedList;
}

static void pushWhenListEmpty(LinkedList * list, struct ListNode * newNode) {
  newNode->next = list->tail;
  newNode->prev = list->head;
  list->head = newNode;
  list->tail = newNode;
}

static struct ListNode * createNode(ListType value) {
  struct ListNode * newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
  if (newNode == NULL){
    printf("Error allocating memory \n");
    exit(1);
  }
  newNode->value = value;
  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  struct ListNode * newNode = createNode(value);
  if (list->size == 0) {
    pushWhenListEmpty(list, newNode);
  } else {
    newNode->next = list->head;
    newNode->prev = NULL;
    list->head->prev = newNode;
    list->head = newNode;
  }
  list->size++;
}

void push(LinkedList * list, uint index, ListType value) {
  if (index > list->size) {
    printf("Index out of bounds \n");
    exit(1);
  }

  if (index == 0) {
    pushFront(list, value);
  if (index == list->size) {
    pushBack(list, value);
  }
  } else {
    struct ListNode * prevElement = getElement(list, index - 1);
    struct ListNode * newNode = createNode(value);
    newNode->next = prevElement->next;
    newNode->prev = prevElement;
    prevElement->next->prev = newNode;
    prevElement->next = newNode;
    list->size++;
  }
}
void pushBack(LinkedList * list, ListType value) {
  struct ListNode * newNode = createNode(value);
  if (list->size == 0) {
    pushWhenListEmpty(list, newNode);
  } else {
    newNode->next = NULL;
    newNode->prev = list->tail;
    list->tail->next = newNode;
    list->tail = newNode;
  }
  list->size++;
  
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
  struct ListNode * node = getElement(list, index);
  node->value = value;
}

ListType popFront(LinkedList * list) {
  struct ListNode * nodeToDelete = list->head;

  if (list->size == 1) {
    list->head = NULL;
    list->tail = NULL;
  } else {
    nodeToDelete->next->prev = NULL;
    list->head = list->head->next;
  }
  
  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;
  return result;
}

ListType pop(LinkedList * list, uint index) {
  if (index >= list->size) {
    printf("Invalid index to remove");
    exit(1);
  }
  if (index == 0) {
    return popFront(list);
  } else if (index == list->size-1) {
    return popBack(list);
  } {
    struct ListNode * prevElement = getElement(list, index - 1);
    struct ListNode * nodeToDelete = prevElement->next;

    prevElement->next = nodeToDelete->next;
    nodeToDelete->next->prev = prevElement;

    ListType result = nodeToDelete->value;
    free(nodeToDelete);
    list->size--;
    return result;
  }
}

ListType popBack(LinkedList * list) {
  struct ListNode * nodeToDelete = list->tail;
  if (nodeToDelete == NULL) {
    printf("List tail == NULL");
  }

  if (list->size == 1) {
    list->head = NULL;
    list->tail = NULL;
  } else {
    list->tail = nodeToDelete->prev;
    nodeToDelete->prev->next = NULL;

  }
  
  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;
  return result;
}

void release(LinkedList * list) {
  while (list->size > 0) {
    popFront(list);
  }
}

void forEach(LinkedList * list, void (*callback)(uint, ListType)) {
  struct ListNode * currentNode = list->head;
  uint index = 0;
  while (currentNode != NULL){
    callback(index, currentNode->value);
    currentNode = currentNode->next;
    index++;
  }
}

void forEachReverse(LinkedList * list, void (*callback)(uint, ListType)) {
  struct ListNode * currentNode = list->tail;
  uint index = list->size - 1;
  while (currentNode != NULL){
    callback(index, currentNode->value);
    currentNode = currentNode->prev;
    index--;
  }
}
