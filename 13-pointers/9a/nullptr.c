#include <stdio.h>

//null pointers
int main(void) {

  //NULL ususally is defined as (void *)0
  int * p = NULL;
  double *p2 = NULL;

  //Option
  if (p != NULL) {
    printf("%d\n", *p);
  } else {
    printf("Handle null pointer\n");
  }

  return 0;
}