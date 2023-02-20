#include <stdio.h>
#include <stdlib.h>

int * foo() {
  int arr[3] = {1, 2, 3};

  return arr;
}

int * foo2() {
  int * arr = (int *) calloc(3, sizeof(int));
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 5;

  return arr;
}

void foo3(void) {
  int * arr = (int *) calloc(5, sizeof(int));
}

int main(void) {
  int * p = foo();
  //printf("%d\n", p[0]); -> causes Segmentation fault

  int * p2 =foo2();
  printf("%d\n", p2[0]);
  free(p2);

  foo3(); //causees memory leak, because we loose the pointer to the allocated memory

  return 0;
}