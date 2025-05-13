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

  return 0;
}