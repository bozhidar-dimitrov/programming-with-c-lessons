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
}

int main(void) {

  dynamicArrayWithCapacityGreaterThanZeroShouldHaveBufferInitialezed();
  dynamicArrayWithCapacityEqualZeroShouldHaveNULLBuffer();
  testPushBackMethod();


  return 0;
}