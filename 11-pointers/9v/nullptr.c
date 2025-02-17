#include <stdio.h>

int main(void) {

  int * p1 = NULL;
  double * p2 = NULL;
  //Usually the NULL is macro defined as ((void *)0)

  *p1 = 15;

  if (p1 == NULL) {
    printf("The pointer is null");
  } else {
    printf("%d", *p1);
  }

  return 0;
}