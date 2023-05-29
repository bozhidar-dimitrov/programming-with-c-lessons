#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "patient.h"

struct ListNode {
  Patient value;
  struct ListNode * next;
};

typedef struct {
  int size;
  struct ListNode * head;
} LinkedList;

LinkedList init();

struct ListNode * get(LinkedList * list, int index);

void pushfront(LinkedList * list, Patient value);
void push(LinkedList *list, int index, Patient value);
void pushback(LinkedList *list, Patient value);

Patient popfront(LinkedList * list);
Patient pop(LinkedList * list, int index);
Patient popback(LinkedList * list);

void set(LinkedList *list, int index, Patient value);

typedef void (*Eacher)(int, Patient);
void foreach(LinkedList *list, Eacher eacher);

#endif