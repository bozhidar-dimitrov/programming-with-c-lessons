#include <stdio.h>
#include <stdlib.h>

int * initArray() {
  int arr[3] = {0, 0, 0};
  return arr;
}

int * initArray2() {
  int * arr = (int *)malloc(sizeof(int) * 3);
  if (arr == NULL){
    printf("Error allocating memory\n");
    exit(1);
  }
  return arr;
}

int main(void) {

  //Returning address of memory that is going to be
  //destroyed after the termination of the function
  //so using this address throws Segmentation fault
  //int * p = initArray();

  int * p = initArray2();
  for (int i = 0; i < 3; i++){
    p[i] = i + 1;
    printf("p[%d] = %d\n", i , p[i]);
  }
  free(p);

  return 0;
}