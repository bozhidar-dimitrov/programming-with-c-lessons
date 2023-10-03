#include <stdio.h>

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  printf("%d", arr[0]);
  arr[1] = 7;

  //Printing all elements of the array
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  int array2d[3][4] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
  };
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", array2d[i][j]);
    }
    printf("\n");
  }

  return 0;
}