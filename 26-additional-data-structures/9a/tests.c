#include <stdio.h>
#include "linkedlist.h"

void printElement(uint index, ListType value) {
  printf("[%u]=>%lf ", index, value);
}

void printLinkedList(LinkedList * list) {
  forEach(list, printElement);
  printf("\n");
}

void printLinkedListReverse(LinkedList * list) {
  forEachReverse(list, printElement);
  printf("\n");
}

int main(void) {

  printf("Executing tests \n");

  LinkedList list = init();
  printf("Is head NULL: %d \n", list.head == NULL);
  printf("List size: %u\n", list.size);

  pushFront(&list, 10);
  pushFront(&list, 15);
  pushFront(&list, 20);
  printLinkedList(&list);

  struct ListNode * secondNode = getElement(&list, 1);
  printf("Second node value: %lf \n", secondNode->value);

  push(&list, 1, 99);
  printLinkedList(&list);

  pushBack(&list, 105);
  printLinkedList(&list);

  setElement(&list, 2, 999);
  printLinkedList(&list);

  ListType firstValue = popFront(&list);
  printf("First value: %lf\n", firstValue);
  printLinkedList(&list);

  ListType fourthElement = pop(&list, 3);
  printf("Fourth value: %lf\n", fourthElement);
  printLinkedList(&list);

  ListType lastElement = popBack(&list);
  printf("Last value: %lf\n", lastElement);
  printLinkedList(&list);
  printLinkedListReverse(&list);
  release(&list);

  return 0;
}