#include <stdio.h>

int main(void) {

  int arr[5];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  int arr2[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++) {
      printf("%d,",a[i][j]);
    }
    printf("\n");
  }

  return 0;
}