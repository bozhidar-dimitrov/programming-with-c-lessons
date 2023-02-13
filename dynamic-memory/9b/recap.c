#include <stdio.h>

int main(void) {

  int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  *(*(arr + 1) + 2);
  *(*(arr + 1) + 2);

  return 0;
}