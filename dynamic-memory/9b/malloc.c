#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int * arr = (int *)malloc(5 * sizeof(int));
  arr[0] = 15;
  arr[1] = 11;
  arr[2] = 15;
  arr[3] = 16;
  arr[4] = 21;

  return 0;
}