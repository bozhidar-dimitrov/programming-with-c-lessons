#include <stdio.h>

int main(void) {

  int *p = (int *) malloc(sizeof(int));
  *p = 7;
  printf("%d\n", *p);

  free(p);

  return 0;
}