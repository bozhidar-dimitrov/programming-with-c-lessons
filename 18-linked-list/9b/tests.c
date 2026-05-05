#include <stdio.h>
#include "LinkedList.h"

void printLinkedList(LinkedList * linkedList) {
  Node * currentNode = linkedList->head;
  while (currentNode != NULL) {
    printf("%d ", currentNode->value);
    currentNode = currentNode->next;
  }
  printf("\n");
}

int main(void) {

  printf("Running LinkedList tests \n");

  LinkedList linkedList = init();
  printf("Assert initial head == NULL: %d\n", linkedList.head == NULL);
  printf("Assert initial size == 0: %d\n", linkedList.size == 0);

  pushFront(&linkedList, 10);
  pushFront(&linkedList, 15);
  pushFront(&linkedList, 20);
  printLinkedList(&linkedList);

  Node * secondNode = getNode(&linkedList, 1);
  printf("Assert second node value == 15: %d\n", secondNode->value == 15);

  ListType secondValue = get(&linkedList, 1);
  printf("Assert second  value == 15: %d\n", secondValue == 15);

  push(&linkedList, 1, 99);
  printLinkedList(&linkedList);

  return 0;
}