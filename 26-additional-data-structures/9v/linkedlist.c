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

static struct ListNode * createNode(ListType value) {
  struct ListNode * newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
  if (newNode == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  newNode->value = value;
  return newNode;
}

void pushFront(LinkedList * list, ListType value) {
  struct ListNode * newNode = createNode(value);

  if (list->size == 0) {
    list->head = newNode;
    list->tail = newNode;
    newNode->prev = NULL;
    newNode->next = NULL;
  } else {
    newNode->next = list->head;
    newNode->prev = NULL;
    list->head->prev = newNode;
    list->head = newNode;
  }
 
  list->size++;
}

void push(LinkedList * list, uint index, ListType value) {
  if (index == 0) {
    pushFront(list, value);
  } if (index == list->size) {
    pushBack(list, value);
  }else {
    struct ListNode * prevNode = getElement(list, index - 1);
    struct ListNode * newNode = createNode(value);

    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    prevNode->next->prev = newNode;
    prevNode->next = newNode;

    list->size++;
  }
}

void pushBack(LinkedList * list, ListType value) {
  struct ListNode * newNode = createNode(value);

  if (list->size == 0) {
    list->head = newNode;
    list->tail = newNode;
    newNode->prev = NULL;
    newNode->next = NULL;
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

  if (index < list->size / 2) {
    struct ListNode * currentNode = list->head;
    for (uint i = 0; i < index;i++) {
      currentNode = currentNode->next;
    }
    return currentNode;
  } else {
    struct ListNode * currentNode = list->tail;
    for (uint i = list->size-1; i > index;i--) {
      currentNode = currentNode->prev;
    }
    return currentNode;
  }
}

void setElement(LinkedList * list, uint index, ListType value) {
  struct ListNode * currentNode = getElement(list, index);
  currentNode->value = value;
}

ListType popFront(LinkedList * list) {
  struct ListNode * nodeToDelete = list->head;
  if (list->size == 1) {
    list->head = NULL;
    list->tail = NULL;
  } else {
    nodeToDelete->next->prev = NULL;
    list->head = nodeToDelete->next;
  }
  
  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;

  return result;
}

ListType pop(LinkedList * list, uint index) {
  if (index == 0) {
    return popFront(list);
  }

  if (index == list->size - 1) {
    return popBack(list);
  }

  struct ListNode * prevNode = getElement(list, index-1);
  struct ListNode * nodeToDelete = prevNode->next;

  nodeToDelete->next->prev = prevNode;
  prevNode->next = nodeToDelete->next;

  ListType result = nodeToDelete->value;
  free(nodeToDelete);
  list->size--;

  return result;
}

ListType popBack(LinkedList * list) {
  struct ListNode * nodeToDelete = list->tail;
  if (list->size == 1) {
    list->head = NULL;
    list->tail = NULL;
  } else {
    nodeToDelete->prev->next = NULL;
    list->tail = nodeToDelete->prev;
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

void forEeach(LinkedList * list, void (*callback)(uint, ListType)) {
  struct ListNode * currentNode = list->head;

  uint index = 0;
  while (currentNode != NULL) {
    callback(index, currentNode->value);
    currentNode = currentNode->next;
    index++;
  }
}

void forEeachReversed(LinkedList * list, void (*callback)(uint, ListType)) {
  struct ListNode * currentNode = list->tail;

  uint index = list->size-1;
  while (currentNode != NULL) {
    callback(index, currentNode->value);
    currentNode = currentNode->prev;
    index--;
  }
}