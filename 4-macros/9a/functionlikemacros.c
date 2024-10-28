#include <stdio.h>

#define SUM(A, B) A + B
#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

int main(void) {

  printf("The sum of 4 and 5 is: %d\n", SUM(4, 5));
  printf("The square of 2 is: %d\n", SQUARE(2));
  printf("The square of 2 + 1 is: %d\n", SQUARE(2 + 1));
  printf("The square of 2 + 1 is: %d\n", SQUARE_SAFE(2 + 1));

  return 0;
}