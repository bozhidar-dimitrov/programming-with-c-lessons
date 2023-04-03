#include "linkedlist.h"
#include <stdio.h>

void printelement(int index, double value) {
  printf("[%d]=%lf ", index, value);
}

void printlinkedlist(LinkedList * list) {
  foreach(list, printelement);
  printf("\n");
}

int main(void) {

  LinkedList list = init();
  printlinkedlist(&list);

  pushfront(&list, 5);
  pushfront(&list, 7);
  pushfront(&list, 3);
  pushfront(&list, 4);
  printlinkedlist(&list);

  struct ListNode * el3 = get(&list, 2);
  printf("Element 3: %lf \n", el3->value);

  push(&list, 1, 11);
  printlinkedlist(&list);

  pushback(&list, 13);
  printlinkedlist(&list);

  double firstelement = popfront(&list);
  printf("First element: %lf \n", firstelement);
  printlinkedlist(&list);

  double fourthelement = pop(&list, 3);
  printf("Fourth element: %lf \n", fourthelement);
  printlinkedlist(&list);

  double lastelement = popback(&list);
  printf("Last element: %lf \n", lastelement);
  printlinkedlist(&list);

  set(&list, 1, 17);
  printlinkedlist(&list);

  return 0;
}