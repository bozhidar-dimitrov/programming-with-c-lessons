#include <stdio.h>
#include <stdlib.h>

int * initArray() {
  int arr[3] = {0, 0, 0};
  return arr;
}

int * initArray2() {
  int * arr = (int *) calloc(3, sizeof(int));
  if (arr == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }
  return arr;
}



int main(void) {

  // int *p  = initArray();
  // for (int i = 0; i < 3; i++) {
  //   p[i] = i + 1;
  //   printf("%d \n", p[i]);
  // }

  int *p  = initArray2();
  for (int i = 0; i < 3; i++) {
    p[i] = i + 1;
    printf("%d \n", p[i]);
  }
  free(p);

  return 0;
}