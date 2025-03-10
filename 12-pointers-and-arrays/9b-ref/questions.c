#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  int (*ptr)[3] = &arr;

  int arr2d[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d\n", *(*(arr2d + i) + j));
    }
  }

  return 0;
}