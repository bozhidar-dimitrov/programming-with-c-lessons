#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*Func)(ucll, ucll);

typedef ucll (*Arr4Ptr)[4];

ucll add(ucll a, ucll b) {
  return a + b;
}

int main(void) {

  ucll arr[4] = {1, 2, 3, 4};
  Arr4Ptr arrptr = &arr;

  Func ptr = add;

  ucll result = ptr(100, 150);

  printf("Result: %llu\n", result);

  return 0;
}