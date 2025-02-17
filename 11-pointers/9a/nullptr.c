#include <stdio.h>

int main(void) {

  int * p1 = NULL;
  double * p2 = NULL;
  //Usually NULL is macro defined as ((void*)0)

  //Dereferencing a NULL pointer gives runtime segmentation fault error
  *p2 = 15;

  //Allways check the pointer before using it!
  if (p2 == NULL) {
    printf("Pointer is null, so cannot dereference");
  } else {
    printf("Value: %lf", *p2);
  }

  return 0;
}