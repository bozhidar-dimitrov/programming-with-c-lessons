#include <stdio.h>

#define SIZE 3

void foo(int a) {
  a++;
  printf("In foo: %d\n", a);
}

int * test1() {
  int arr[SIZE] = {1, 2, 3};
  return arr;
}

int * test2(int * arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }

  return arr;
}

int main(void) {
  int a = 7;
  foo(a);
  printf("In main: %d\n", a);

  //Throws Segmentation fault error:
  // int * result1 = test1();
  // for (int i = 0; i < SIZE; i++) {
  //   printf("%d\n", result1[i]);
  // }

  int myarr[SIZE] = {1, 2, 3};
  int * result2 = test2(myarr, SIZE);
  for (int i = 0; i < SIZE; i++) {
    printf("%d\n", result2[i]);
  }

  return 0;
}