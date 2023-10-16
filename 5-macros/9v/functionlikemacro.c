#include <stdio.h>

#define SQUARE(X) X * X
#define SQUARE_SAFE(X) ((X) * (X))

#define ORDER(FIRST, SECOND) SECOND; FIRST;

int main(void) {

  //printf("Square 1: %d\n", 3 * 3);
  printf("Square 1: %d\n", SQUARE(3));

  //printf("Square 2: %d\n", 1 + 2 * 1 + 2);
  printf("Square 2: %d\n", SQUARE(1 + 2));

  //printf("Square 3: %d\n", 1 + 2 * 1 + 2);
  printf("Square 3: %d\n", SQUARE_SAFE(1 + 2));

  ORDER(printf("Hello"), printf("World"));

  return 0;
}