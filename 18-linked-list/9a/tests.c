#include <stdio.h>
#include "LinkedList.h"

void printLinkedList(LinkedList * list) {
  struct Node * currentNode = list->head;
  while (currentNode != NULL) {
    printf("%d ", currentNode->value);
    currentNode = currentNode->next;
  }
  printf("\n");
}

int main(void) {
  printf("Running LinkedList tests \n");

  LinkedList linkedList = init();
  printf("Assert Linked list initial head == NULL: %d\n", linkedList.head == NULL);
  printf("Assert Linked list initial size == 0: %d\n", linkedList.size == 0);

  pushFront(&linkedList, 10);
  pushFront(&linkedList, 15);
  pushFront(&linkedList, 30);

  printLinkedList(&linkedList);

  struct Node * secondNode = getNode(&linkedList, 1);
  printf("Assert second node value == 15:%d\n", secondNode->value == 15);

  ListType structValue = get(&linkedList, 1);
  printf("Assert second value == 15:%d\n", structValue == 15);

  push(&linkedList, 1, 99);
  printLinkedList(&linkedList);

  ListType firstValue = popFront(&linkedList);
  printf("Assert first value == 30:%d\n", firstValue == 30);
  printLinkedList(&linkedList);

  return 0;
}