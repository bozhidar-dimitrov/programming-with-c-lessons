#include <stdio.h>

#define SUM(A, B) A + B
#define SQUARE(A) A * A
#define SQUARE_SAFE(A) ((A) * (A))

int main(void) {

  printf("Sum of elements: %d \n", SUM(4, 5));
  printf("Square of elements: %d \n", SQUARE(2));
  printf("Square of elements: %d \n", SQUARE(2+1));
  printf("Square of elements: %d \n", SQUARE_SAFE(2+1));

  return 0;
}