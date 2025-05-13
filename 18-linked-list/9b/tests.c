#include <stdio.h>
#include "LinkedList.h"

int main(void) {

  printf("Running LinkedList tests \n");

  LinkedList linkedList = init();
  printf("Assert initial head == NULL: %d\n", linkedList.head == NULL);
  printf("Assert initial size == 0: %d\n", linkedList.size == 0);

  return 0;
}