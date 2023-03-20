#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

typedef unsigned long long ull;

typedef int (*ADDER)(int, int);

typedef int (*ARR_PTR)[5];

ull add2(ull a, ull b) {
  return a + b;
}

int main(void) {

  int (*ptr)(int, int) = add;
  (*ptr)(5,5);

  ADDER fptr = add;
  fptr(5, 10);

  int arr[5] = {1, 2, 3, 4, 5};

  int (*p)[5] = &arr;
  ARR_PTR p1 = &arr;

  const unsigned long long a;
  ull b = 10;

  return 0;
}