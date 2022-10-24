#include <stdio.h>

#define SQUARE(X) X*X

#define SQUARE_SAFE(X) ((X)*(X))

int main(void) {

  printf("%d\n", SQUARE(2)); // 2 * 2
  printf("%d\n", SQUARE(2 + 1)); // 2 + 1 * 2 + 1

  printf("%d\n", SQUARE_SAFE(2)); // 2 * 2
  printf("%d\n", SQUARE_SAFE(2 + 1)); // 2 + 1 * 2 + 1

  return 0;
}