#include <stdio.h>
#include <stdlib.h>

int * initArrayOf3() {
  //Stack allocated array:
  int arr[3] = {0, 0, 0};
  return arr;
}

int * initArrayOf3Version2() {
  
  int * arr = (int *)calloc(3, sizeof(int));
  if (arr == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  return arr;
}

int main(void) {

  // int * someArray = initArrayOf3();
  // for (int i = 0; i < 3; i++) {
  //   //Throws segmentation fault:
  //   printf("%d ", someArray[i]);
  // }

  int * someArray = initArrayOf3Version2();
  for (int i = 0; i < 3; i++) {
    //Throws segmentation fault:
    printf("%d ", someArray[i]);
  }
  free(someArray);

  return 0;
}