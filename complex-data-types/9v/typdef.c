#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

typedef const unsigned long long tcull;

typedef int (*F_PTR)(int, int);

typedef int (*ARR_PTR)[5];

typedef tcull some;

typedef long long ll;

tcull add2(some a, some b) {
  return a + b;
}

int main(void) {

  int (*ptr)(int, int) = add;
  int a[5] = {1, 2, 3, 4, 5};
  int (*ptrf)[5] = &a;

  const unsigned long long x = 10;
  tcull z = x;

  F_PTR fptr = add;
  printf("%d\n", fptr(5, 5));

  ARR_PTR arrptr = &a;

  return 0;
}