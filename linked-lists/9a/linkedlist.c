#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

static struct ListNode * createnode(double value) {
  struct ListNode * newnode = (struct ListNode *) malloc(sizeof(struct ListNode));
  if (newnode == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }
  newnode->value = value;
  return newnode;
}

LinkedList init() {
  LinkedList list = {size: 0, head:NULL};
  return list;
}

struct ListNode * get(LinkedList * list, int index) {
  if (index < 0 || index >= list->size) {
    return NULL;
  }

  struct ListNode * currentnode = list->head;
  for (int i = 0; i < index; i++) {
    currentnode = currentnode->next;
  }

  return currentnode;
}

void push(LinkedList * list, int index, double value) {
  if (index == 0) {
    pushfront(list, value);
    return;
  }

  struct ListNode * prev = get(list, index-1);
  struct ListNode * newnode = createnode(value);
  newnode->next = prev->next;
  prev->next = newnode;
  list->size++;
}

void pushback(LinkedList * list, double value) {
  push(list, list->size, value);
}

void pushfront(LinkedList * list, double value) {
  struct ListNode * newnode = createnode(value);
  newnode->next = list->head;
  list->head = newnode;
  list->size++;
}

double pop(LinkedList * list, int index) {
  if (index == 0) {
    return popfront(list);
  }

  struct ListNode * prev = get(list, index - 1);
  struct ListNode * nodetodelete = prev->next;
  prev->next = nodetodelete->next;
  list->size--;

  double result = nodetodelete->value;
  free(nodetodelete);
  return result;
}

double popfront(LinkedList * list) {
  struct ListNode * nodetodelete = list->head;
  list->head = list->head->next;
  list->size--;

  double result = nodetodelete->value;
  free(nodetodelete);
  return result;
}


double popback(LinkedList * list) {
  return pop(list, list->size-1);
}

void set(LinkedList * list, int index, double value) {
  struct ListNode * node = get(list, index);
  node->value = value;
}