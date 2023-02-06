#include <stdio.h>

int main(void) {

  int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  printf("arr=%p\n", arr);
  printf("&arr[0][0]=%p\n", &arr[0][0]);
  //=> arr is a pointer to the beginning of the memory ocuppied by the 2d array

  printf("arr + 1=%p\n", arr + 1);
  printf("arr[1][0]=%p\n", &arr[1][0]);
  //=> 2d array names behave like pointers to arrays

  printf("*(arr + 1)=%p\n", *(arr + 1));
  //=> dereferencing double pointer will result in a pointer

  printf("*(arr + 1) + 1=%p\n", *(arr + 1) + 1);
  printf("arr[1][1]=%p\n", &arr[1][1]);
  //=> &arr[i][j] == *(arr + i) + j
  //=> arr[i][j] == *(*(arr + i) + j)

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }

  return 0;
}