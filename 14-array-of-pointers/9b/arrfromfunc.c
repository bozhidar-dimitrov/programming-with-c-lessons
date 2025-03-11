#include <stdio.h>
#include <stdlib.h>

int * initArray() {
  int arr[3] = {0, 0, 0};
  return arr;
}

int * initArray2() {
  int * arr = malloc(3 * sizeof(int));
  if (arr == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  return arr;
}

int main(void) {

  //Returns address of stack memory that is being destroyed
  //at the end of the function, so the returned address points
  //to invalid memory which gives segmentation fault
  //int * p = initArray();

  int * p = initArray2();
  for (int i = 0; i < 3; i++) {
    p[i] = i + 1;
    printf("%d ", p[i]);
  }

  return 0;
}