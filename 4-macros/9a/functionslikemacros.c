#include <stdio.h>

#define SUM(A, B) A + B
#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

int main(void) {

  printf("%d\n", SUM(5, 6));
  printf("%d\n", SQUARE(2));
  printf("%d\n", SQUARE(2 + 1));
  printf("%d\n", SQUARE_SAFE(2 + 1));

  return 0;
}