#include <stdio.h>
#include "DynamicArray.h"

#define ASSERT_TEST(MESSAGE, CONDITION) \
  if (CONDITION) { \
    printf(MESSAGE ":PASSED\n"); \
  } else { \
    printf(MESSAGE ":FAILED\n"); \
  }

void dynamicArrayWithCapacityGreaterThanZeroShouldHaveBufferInitialezed() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  ASSERT_TEST("Initial size of dynamic array should be 0", dynArr.size == 0);
  ASSERT_TEST("Initial capacity of dynamic array should be equal to passed capacity", dynArr.capacity == initialCapacity);
  ASSERT_TEST("Buffer should not be NULL when passed capacity is greater than 0", dynArr.buffer != NULL);
}

void dynamicArrayWithCapacityEqualZeroShouldHaveNULLBuffer() {
  int initialCapacity = 0;
  DynamicArray dynArr = init(initialCapacity);

  ASSERT_TEST("Initial size of dynamic array should be 0", dynArr.size == 0);
  ASSERT_TEST("Initial capacity of dynamic array should be equal to passed capacity", dynArr.capacity == initialCapacity);
  ASSERT_TEST("Buffer should not be NULL when passed capacity is greater than 0", dynArr.buffer == NULL);
}

void testPushBackMethod() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);

  ASSERT_TEST(
    "Pushing 5,10,15 in dynamic array should have 5,10,15 in buffer",
    dynArr.buffer[0] == 5 
    && dynArr.buffer[1] == 10 
    && dynArr.buffer[2] == 15
  );

  ASSERT_TEST(
    "When pushing more items than the initial capacity, the capacity of the dynamic array should be doubled",
    dynArr.capacity == initialCapacity * 2
  );
}

void testPopBackMethod() {
  int initialCapacity = 2;
  DynamicArray dynArr = init(initialCapacity);

  pushBack(&dynArr, 5);
  pushBack(&dynArr, 10);
  pushBack(&dynArr, 15);

  DynArrType lastElement = popBack(&dynArr);
  ASSERT_TEST("After pushing some elements in the dynamic array and calling the popBack method once, the method should return the last element",
    lastElement == 15
  );

  ASSERT_TEST("After pushing three elements and then popping one, the capacity of the dynamic array should become 2",
    dynArr.capacity == 2
  );

  DynArrType secondToLast = popBack(&dynArr);
  ASSERT_TEST("After pushing some elements in the dynamic array and calling the popBack method twice, the method should return the second to last element",
    secondToLast == 10
  );

  ASSERT_TEST("After pushing three elements and then popping two, the capacity of the dynamic array should become 1",
    dynArr.capacity == 1
  );

}

int main(void) {

  dynamicArrayWithCapacityGreaterThanZeroShouldHaveBufferInitialezed();
  dynamicArrayWithCapacityEqualZeroShouldHaveNULLBuffer();
  testPushBackMethod();
  testPopBackMethod();

  return 0;
}