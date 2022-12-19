#include <stdio.h>

#define SIZE 3

int foo(int a) {
  a++;
  printf("%d\n", a);
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
  printf("%d\n", a);

  //Throws Segmentation fault error
  // int * result = test1();
  // for (int i = 0; i < SIZE; i++) {
  //   printf("%d\n", result[i]);
  // }

  int myarr[SIZE] = {1, 2, 3};
  int * result2 = test2(myarr, SIZE);
  for (int i = 0; i < SIZE; i++) {
    printf("%d\n", result2[i]);
  } 

  return 0;
}