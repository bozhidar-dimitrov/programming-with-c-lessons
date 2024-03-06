#include <stdio.h>

int main(void) {

  int arr[2][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8}
  };

  int (*ptr)[4] = arr;

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  return 0;
}