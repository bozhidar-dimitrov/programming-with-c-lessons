#include <stdio.h>

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}

int main(void) {

  int arr[5];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  printf("arr[2] == %d\n", arr[2]);

  int arr2[5] = {1, 2, 3, 4, 5};
  //Skipping the array size when using literals is allowed
  int arr3[] = {1, 2, 3, 4, 5}; 

  int arr4[5];
  for (int i = 0; i < 5; i++) {
    arr4[i] = i + 1;
  }

  int arr5[7] = {1, 2, 3, 4, 5, 6, 7};

  print(arr5, 7);

  return 0;
}