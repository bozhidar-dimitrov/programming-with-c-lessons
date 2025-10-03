#include <stdio.h>

int main(void) {

  int arr[4][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
  };

  printf("arr[2][0] == %d\n", arr[2][0]);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}