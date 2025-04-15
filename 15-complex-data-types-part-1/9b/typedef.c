#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*Function)(ucll, ucll);

typedef ucll (*Array4Ptr)[4];

ucll add(ucll a, ucll b) {
  return a + b;
}

int main(void) {

  ucll arr[4] = {1, 2, 3, 4};

  Array4Ptr arrPtr = &arr;

  ucll a = 100;
  ucll b = 150;

  Function ptr = add;
  ucll result = ptr(a, b);

  printf("Result: %llu\n", result);

  return 0;
}