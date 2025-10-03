#include <stdio.h>

int sum(int n) {
  if (n == 1) return 1;
  return n + sum(n-1);
}

int main(void) {

  // 1 2 3 4 5 6 7 8 ... n
  // sum(n) => ?
  int result = sum(5);
  printf("%d\n", result);

  return 0;
}