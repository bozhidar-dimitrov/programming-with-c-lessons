#include <stdio.h>
#include <stdlib.h>

int * createarr() {
  int arr[5] = {1, 2, 3, 4, 5};
  return arr;
}

int * createarr2(int size) {
  int * arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  return arr;
}

int main(void) {

  //Error accessing address of local variable outside of the function
  // int * arr1 = createarr();
  // for (int i = 0; i < 5; i++) {
  //   arr1[i] = i;
  // }

  int * arr1 = createarr2(5);
  for (int i = 0; i < 5; i++) {
    arr1[i] = i;
  }

  free(arr1);

  return 0;
}