#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

typedef unsigned long long ull;

typedef int (* ADDER)(int, int);

typedef int (* ARR_PTR)[5];

ull mul(ull a, ull b) {
  return a * b;
}

int main(void) {

  int (*p)(int, int) = add;
  (*p)(5, 5);
  ADDER p1 = add;
  p1(8, 8);

  int arr[5] = {1, 2, 3, 4, 5};
  int (*ptr)[5] = &arr;
  ARR_PTR ptr2 = &arr;

  unsigned long long a = 5;
  ull b = a;

  return 0;
}