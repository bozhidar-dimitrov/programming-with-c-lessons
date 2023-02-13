#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int * arr = (int *)malloc(5 * sizeof(int));
  arr[0] = 10;
  arr[1] = 15;
  arr[2] = 11;
  arr[3] = 14;
  arr[4] = 15;
  

  return 0;
}