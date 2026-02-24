#include <stdio.h>
#include <stdlib.h>

int * initArrayOf3() {
  int arr[3] = {0, 0, 0};
  return arr;
}

int * initArrayOf3Version2() {
  int * arr = (int *)calloc(3, sizeof(int));
  if (arr == NULL){
    printf("Error allocating memory \n");
    exit(1);
  }
  return arr;
}


int main(void) {

  // int * arr = initArrayOf3();
  // for (int i = 0; i < 3; i++) {
  //   //Throws Segmentation Fault:
  //   printf("%d ", arr[i]);
  // }

  int * arr = initArrayOf3Version2();
  for (int i = 0; i < 3; i++) {
    //This works now:
    printf("%d ", arr[i]);
  }
  //But we need to be careful and free the memery,
  //when we don't need it anymore
  free(arr);

  return 0;
}