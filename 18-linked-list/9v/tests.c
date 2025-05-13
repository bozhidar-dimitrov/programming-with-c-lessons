#include <stdio.h>
#include "LinkedList.h"

void printLinkedList(LinkedList * list) {
  Node * currentNode = list->head;
  while (currentNode != NULL) {
    printf("%d ", currentNode->value);
    currentNode = currentNode->next;
  }
  printf("\n");
}

int main(void) {

  printf("Running LinkedList tests \n");

  LinkedList list = init();
  printf("Assert initial head == NULL:%d\n", list.head == NULL);
  printf("Assert initial size == 0:%d\n", list.size == 0);

  pushFront(&list, 10);
  pushFront(&list, 15);
  pushFront(&list, 20);
  printLinkedList(&list);

  Node * secondNode = getNode(&list, 1);
  printf("Assert that second node value == 15: %d\n", secondNode->value == 15);

  ListType secondValue = get(&list, 1);
  printf("Assert that second value == 15: %d\n", secondValue == 15);

  push(&list, 1, 99);
  printLinkedList(&list);

  ListType firstValue = popFront(&list);
  printf("Assert that first value == 20: %d\n", firstValue == 20);
  printLinkedList(&list);

  return 0;
}