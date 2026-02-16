#include <stdio.h>

int main(void) {

  int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  int a1 = *(*(arr+1) + 1);

  return 0;
}