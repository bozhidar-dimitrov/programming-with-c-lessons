#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};

  int (*arrPtr)[3] = &arr;
  
  for (int i = 0; i < 3; i++) {
    printf("%d ", (*arrPtr)[i]);
  }

  return 0;
}