#include <stdio.h>
#include "stack.h"

int main(void) {

  ListStack stack = initStack();

  pushInStack(&stack, 10);
  pushInStack(&stack, 5);
  pushInStack(&stack, 2);

  StackType first = popFromStack(&stack);
  StackType second = popFromStack(&stack);
  StackType third = popFromStack(&stack);

  printf("%lf %lf %lf\n", first, second, third);

  return 0;
}