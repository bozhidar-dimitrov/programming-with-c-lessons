#include <stdio.h>
#include "singleinclude.h"

int main(void) {
  printf("%d\n", add(5, 6));
  return 0;
}

int add(int a, int b) {
  return a + b;
}