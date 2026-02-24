#include <stdio.h>
#include <stdlib.h>

int * initArrayOf3() {
  //This array is allocated in the stack:
  int arr[3] = {1, 2, 3};
  return arr;
}

int * initArrayOf3Version2() {
  int * arr = malloc(3 * sizeof(int));
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  if (arr == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  return arr;
}

int main(void) {

  // int * someArray = initArrayOf3();
  // for (int i = 0; i < 3; i++){
  //   //This throws Segmentation fault: 
  //   //Accessing address of released stack variable
  //   printf("%d ", someArray[i]);
  // }

  int * someArray = initArrayOf3Version2();
  for (int i = 0; i < 3; i++){
    //This works:
    printf("%d ", someArray[i]);
  }
  //But we need to make sure that we have released the memory afterwords.
  free(someArray);

  return 0;
}