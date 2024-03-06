#include <stdio.h>

int main(void) {

  int arr1[3] = {1, 2, 3};
  int arr2[3] = {4, 5, 6};

  int * p1 = arr1;
  printf("%d\n", p1[0]);

  int * ptr[2];

  ptr[0] = arr1;
  ptr[1] = arr2;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  printf("%p\n", ptr);
  printf("%p\n", &ptr[0]);

  printf("%p\n", *ptr);
  printf("%p\n", &ptr[0][0]);

  int ** pp = ptr;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", pp[i][j]);
    }
    printf("\n");
  }

  return 0;
}