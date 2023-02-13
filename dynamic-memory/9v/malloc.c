#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int * arr = (int *)malloc(5 * sizeof(int));
  arr[0] = 5;
  arr[1] = 7;
  arr[2] = 10;
  arr[3] = 15;
  arr[4] = 14;

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}