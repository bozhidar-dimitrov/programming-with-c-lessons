#include <stdio.h>
#include "LinkedList.h"

#define ASSERT_TEST(MESSAGE, CONDITION) \
  if (CONDITION) { \
    printf(MESSAGE ":PASSED\n"); \
  } else { \
    printf(MESSAGE ":FAILED\n"); \
  }

void printLinkedList(LinkedList * linkedList) {
  
}

void linkedListShouldBeInitializedCorrectly() {
  LinkedList linkedList = init();
  ASSERT_TEST("Empty linked list head should point to NULL", linkedList.head == NULL);
  ASSERT_TEST("Empty linked list size should be equal to 0", linkedList.size == 0);
}

void pushingOneElementInEmptyLinkedListShouldWorkCorrectly() {
  LinkedList linkedList = init();
  pushFront(&linkedList, 5);

  ASSERT_TEST("New size should be equal to 1", linkedList.size == 1);
  ASSERT_TEST("First element should have correct value", linkedList.head->value == 5);
}

void getShouldWorkCorrectly() {
  LinkedList linkedList = init();
  pushFront(&linkedList, 5);
  pushFront(&linkedList, 10);
  pushFront(&linkedList, 15);

  int value1 = get(&linkedList, 0);
  ASSERT_TEST("First element should have correct value:", value1 == 15);

  int value2 = get(&linkedList, 1);
  ASSERT_TEST("Second element should have correct value:", value2 == 10);

  int value3 = get(&linkedList, 2);
  ASSERT_TEST("Third element should have correct value:", value3 == 5);
}

int main(void) {

  linkedListShouldBeInitializedCorrectly();
  pushingOneElementInEmptyLinkedListShouldWorkCorrectly();
  getShouldWorkCorrectly();

  return 0;
}