#include <stdio.h>

int main(void) {

  int array[] = {1, 2, 3, 4, 5};
  int array2[5];

  printf("%d\n", array[0]);
  array[1] = 7;

  for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
  }

  int array2d[3][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      array2d[i][j] = i * 5 + j + 1;
    }
  }

  return 0;
}