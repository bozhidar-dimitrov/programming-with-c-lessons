#include <stdio.h>

int main(void) {

  int * p = malloc(sizeof(int) * 10);

  int arr[3] = {1, 2, 3};
  int (* ptr)[3] = &arr;

  int ** pp = &p;

  return 0;
}