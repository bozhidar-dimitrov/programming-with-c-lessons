#include <stdio.h>

int main(void) {

  int * p = NULL;

  //Throws segmentation fault:
  //printf("%d\n", *p);

  int a = 10;

  p = &a;

  if (p != NULL) {
    printf("%d\n", *p);
  }

  return 0;
}