#include <stdio.h>
#include "DynamicArray.h"

#define ASSERT_TEST(MESSAGE, CONDITION) \
  if (CONDITION) { \
    printf(MESSAGE ":PASSED\n"); \
  } else { \
    printf(MESSAGE ":FAILED\n"); \
  }

void testDynamicArrayInitializationWithCapacityDifferentThanZero() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  ASSERT_TEST("Initial size of dynamic array should be equal to 0", dynArr.size == 0);
  ASSERT_TEST("Initial capacity of dynamic array should be equal to passed capacity", dynArr.capacity == initialCapacity);
  ASSERT_TEST("Buffer of dynamic array inited with capacity not equal to 0 should be not NULL", dynArr.buffer != NULL);
}

void testPushElementsInDynamicArray() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 6);
  pushBack(&dynArr, 8);

  push(&dynArr, 1, 99);

  ASSERT_TEST("When pushing back 5, 6, 8 in dynamic array and pushing 99 on index 1, the buffer of the dynamic array should have values 5, 99, 6, 8", 
    dynArr.buffer[0] == 5 
    && dynArr.buffer[1] == 99
    && dynArr.buffer[2] == 6
    && dynArr.buffer[3] == 8
  );
}

void testPushingBackElementsInDynamicArray() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 6);
  pushBack(&dynArr, 8);

  ASSERT_TEST("When pushing 5, 6, 8 in dynamic array the buffer of the dynamic array should have values 5, 6, 8", 
    dynArr.buffer[0] == 5 
    && dynArr.buffer[1] == 6
    && dynArr.buffer[2] == 8
  );

  ASSERT_TEST(
    "Dynamic array capacity should be doubled, when pushing more elements than the initial capacity", 
    dynArr.capacity == initialCapacity * 2
  );
}

int main(void) {
  testDynamicArrayInitializationWithCapacityDifferentThanZero();
  testPushingBackElementsInDynamicArray();

  testPushElementsInDynamicArray();

  return 0;
}