#include <stdio.h>

int main(void) {

  int a[5];
  for (int i = 0; i < 5; i++) {
    a[i] = i + 1;
  }

  int b[] = {1, 2, 3, 4, 5};

  int arr[3][4];
  int iterator = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      //a[i][j] = i * 4 + j + 1;
      arr[i][j] = iterator;
      iterator++;
    }
  }

  int arr2[3][4] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
  };

  return 0;
}