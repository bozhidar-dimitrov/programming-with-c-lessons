#include <stdio.h>

int main(void) {

  int * p = NULL;

  //This throws segmentation fault:
  //printf("%d\n", *p);

  //We need always to check whether the pointers points to something
  if (p != NULL) {
    printf("%d\n", *p);
  }

  return 0;
}