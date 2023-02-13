#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double *arr = (double *) calloc(3, sizeof(double));
  arr[0] = 5.5;
  arr[1] = 1.5;
  arr[2] = 5.5;

  arr = (double *) realloc(arr, 4 * sizeof(double));
  arr[3] = 6.5;

  arr = (double *) realloc(arr, 2 * sizeof(double));
  //Now we can access only indices 0 and 1;
  printf("%lf\n", arr[0]);
  printf("%lf\n", arr[1]);
  //printf("%lf\n", arr[2]); -> error, accessing element 

  return 0;
}