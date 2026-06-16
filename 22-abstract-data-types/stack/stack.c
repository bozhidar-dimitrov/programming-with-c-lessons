#include <stack.h>


void push(Stack * stack, StackType value) {
  pushBack(&stack->stackCollection, value);
}

StackType pop(Stack * stack) {
  return popBack(&stack->stackCollection);
}