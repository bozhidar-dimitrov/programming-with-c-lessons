#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "patient.h"

#define TYPE Patient

struct ListNode {
  TYPE value;
  struct ListNode * next;
};

typedef struct {
  int size;
  struct ListNode * head;
} LinkedList;

LinkedList init();

struct ListNode * get(LinkedList * list, int index);

void pushfront(LinkedList * list, TYPE value);
void push(LinkedList *list, int index, TYPE value);
void pushback(LinkedList *list, TYPE value);

TYPE popfront(LinkedList * list);
TYPE pop(LinkedList * list, int index);
TYPE popback(LinkedList * list);

void set(LinkedList *list, int index, TYPE value);

typedef void (*Eacher)(int, TYPE);
void foreach(LinkedList *list, Eacher eacher);

#endif