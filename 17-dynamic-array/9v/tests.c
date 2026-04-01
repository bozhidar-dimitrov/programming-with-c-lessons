#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"

#define ASSERT_TEST(MESSAGE, CONDITION) \
  if (CONDITION) { \
    printf(MESSAGE ": PASSED\n"); \
  } else { \
    printf(MESSAGE ": FAILED\n"); \
  }

void testDynArrayInitializationWithCapacityGreaterThanZero() {
  int initialTestCapacity = 2;
  DynamicArray dynArr = init(initialTestCapacity);

  ASSERT_TEST("Initial size should be equal to 0", dynArr.size == 0);
  ASSERT_TEST("Initial capacity should be equal to passed capacity", dynArr.capacity == initialTestCapacity);
  ASSERT_TEST("Initial buffer with capacity > 0 should not be equal to NULL", dynArr.buffer != NULL);
}

void testDynArrayInitializationWithCapacityIsEqualToZero() {
  int initialTestCapacity = 0;
  DynamicArray dynArr = init(initialTestCapacity);

  ASSERT_TEST("Initial size should be equal to 0", dynArr.size == 0);
  ASSERT_TEST("Initial capacity should be equal to passed capacity", dynArr.capacity == initialTestCapacity);
  ASSERT_TEST("Initial buffer with capacity == 0 should be equal to NULL", dynArr.buffer == NULL);
}

void testPushBackFunction() {
  int initialTestCapacity = 2;
  DynamicArray dynArr = init(initialTestCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);
  
  ASSERT_TEST(
    "Inserting 3 elements in dynamic array with capacity 2 should resize the dynamic array capacity to 4",
    dynArr.capacity == initialTestCapacity * 2
  );

  ASSERT_TEST(
    "Adding 5, 10, 15 with the pushBack method, should insert 5, 10, 15 in the buffer \n", 
    dynArr.buffer[0] == 5
    && dynArr.buffer[1] == 10
    && dynArr.buffer[2] == 15
  );
  
}

void testPopBackMethod() {
  int initialTestCapacity = 2;
  DynamicArray dynArr = init(initialTestCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);
  
  DynArrType lastValue = popBack(&dynArr);
  ASSERT_TEST("After pushing back three values, when we call popBack we should receive the last pushedback value",
    lastValue == 15
  );

  ASSERT_TEST("When the size of the dynamic becomes less than the half of the dynamic array capacity, the capacity of the dynamic array should also be halfed", 
    dynArr.capacity == initialTestCapacity
  );

  DynArrType secondToLast = popBack(&dynArr);
  ASSERT_TEST("After pushing back three values, when we call popBack two times we should receive the second to last pushedback value",
    secondToLast == 10
  );

  ASSERT_TEST("When the size of the dynamic becomes less than the half of the dynamic array capacity, the capacity of the dynamic array should also be halfed", 
    dynArr.capacity == 1
  );
}

int main(void) {

  testDynArrayInitializationWithCapacityGreaterThanZero();
  testDynArrayInitializationWithCapacityIsEqualToZero();
  testPushBackFunction();
  testPopBackMethod();

  return 0;
}