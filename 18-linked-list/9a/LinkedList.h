#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int ListType;
typedef unsigned int uint;

struct Node {
  ListType value;
  struct Node * next;
};

typedef struct {
  struct Node * head;
  uint size;
} LinkedList;

LinkedList init();

void pushFront(LinkedList * list, ListType value);
void push(LinkedList * list, uint index, ListType value);
void pushBack(LinkedList * list, ListType value);

ListType popFront(LinkedList * list);
ListType pop(LinkedList * list, uint index);
ListType popBack(LinkedList * list);

struct Node * getNode(LinkedList * list, uint index);

ListType get(LinkedList * list, uint index);
void set(LinkedList * list, uint index, ListType value);

void release(LinkedList *list);

#endif