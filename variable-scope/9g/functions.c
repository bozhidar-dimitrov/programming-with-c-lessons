#include <stdio.h>

int * foo() {
  int arr[3] = {1, 2, 3};
  return arr;
}

int * test(int * arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i+1;
  } 

  return arr;
}

int main(void) {

  int * myarr = foo();
  //Doesn't work
  // for (int i = 0; i < 3; i++) {
  //   printf("%d\n", myarr[i]);
  // }

  int arr[5] = {1, 2, 3, 4, 5};
  int * result = test(arr, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d\n", result[i]);
  }

  return 0;
}