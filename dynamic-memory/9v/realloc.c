#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int * a = (int *) calloc(3, sizeof(int));

  a[0] = 1;
  a[1] = 3;
  a[2] = 5;

  a = (int *) realloc(a, 4 * sizeof(int));
  a[3] = 10;

  a = (int *) realloc(a, 2 * sizeof(int));
  //only indexes 0 and 1 are available

  return 0;
}