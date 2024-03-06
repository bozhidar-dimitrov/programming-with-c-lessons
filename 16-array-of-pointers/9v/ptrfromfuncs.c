#include <stdio.h>
#include <stdlib.h>

int * createnewarr() {
  int arr[5] = {1, 2, 3, 4, 5};
  return arr;
}

int * createnewarr2(int size) {
  int * arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  return arr;
}

int main(void) {

  //Error: using an address of a local variable returned by a function
  // int * arr1 = createnewarr();
  // for (int i = 0; i < 5; i++ ) {
  //   printf("%d ", arr1[i]);
  // }

  int * arr1 = createnewarr2(5);
  for (int i = 0; i < 5; i++ ) {
    printf("%d ", arr1[i]);
  }

  free(arr1);

  return 0;
}