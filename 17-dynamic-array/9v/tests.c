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

int main(void) {

  testDynArrayInitializationWithCapacityGreaterThanZero();
  testDynArrayInitializationWithCapacityIsEqualToZero();

  return 0;
}