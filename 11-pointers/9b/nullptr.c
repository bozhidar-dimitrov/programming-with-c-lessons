#include <stdio.h>

int main(void) {

  int * p = NULL;

  //printf("%d\n", *p);

  //We always need to check whether the pointer points to something before using it
  if (p != NULL) {
    printf("%d\n", *p);
  }

  return 0;
}