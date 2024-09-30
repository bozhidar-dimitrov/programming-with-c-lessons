#include <stdio.h>

int main(void) {

  int arr[5];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  for (int i = 0; i < 5; i++) {
    printf("%d \n", arr[i]);
  }

  int arr1[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    printf("%d \n", arr1[i]);
  }

  return 0;
}