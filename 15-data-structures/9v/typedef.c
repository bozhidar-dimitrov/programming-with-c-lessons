#include <stdio.h>

typedef unsigned const long long ucll; 

typedef ucll (*Function)(ucll, ucll);

typedef ucll (*Array4Pointer)[4];

#define DEFINE_ARR_PTR(NAME, SIZE) typedef ucll (*NAME)[SIZE]

DEFINE_ARR_PTR(Array5Pointer, 5);

ucll add(ucll a, ucll b) {
  return a + b;
}

int main(void) {

  ucll arr[4] = {1, 2, 3, 4};
  Array4Pointer arrptr = &arr;

  ucll arr[5] = {1, 2, 3, 4, 5};
  Array5Pointer arr5ptr = &arr;

  ucll a = 100;
  ucll b = 150;

  Function ptr = add;

  ucll result = ptr(a, b);
  printf("Result: %llu\n", result);

  return 0;
}