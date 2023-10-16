#include <stdio.h>

#define SQUARE(X) X * X
#define SQUARE_SAFE(X) ((X) * (X))
#define SUM(A, B) ((A) + (B))

#define ORDER(FIRST, SECOND) SECOND; FIRST;

int main(void) {

  //printf("%d \n", 3 * 3);
  printf("%d \n", SQUARE(3));

  //printf("%d \n", 1 + 2 * 1 + 2);
  printf("%d \n", SQUARE(1 + 2));

  //printf("Safe: %d \n", ((1 + 2) * (1 + 2)));
  printf("Safe:%d \n", SQUARE_SAFE(1 + 2));

  printf("Sum: %d \n", SUM(5, 10));

  ORDER(printf("Hello"), printf(" World"));

  return 0;
}