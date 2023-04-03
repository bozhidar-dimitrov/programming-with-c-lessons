#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct ListNode {
  double value;
  struct ListNode * next;
};

typedef struct {
  int size;
  struct ListNode * head;
} LinkedList;

LinkedList init();

struct ListNode * get(LinkedList * list, int index);

void pushfront(LinkedList * list, double value);
void push(LinkedList *list, int index, double value);
void pushback(LinkedList *list, double value);

double popfront(LinkedList * list);
double pop(LinkedList * list, int index);
double popback(LinkedList * list);

void set(LinkedList *list, int index, double value);

typedef void (*Eacher)(int, double);
void foreach(LinkedList *list, Eacher eacher);

#endif