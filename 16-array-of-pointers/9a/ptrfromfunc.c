#include <stdio.h>
#include <stdlib.h>

int * createnewarr() {
  int arr[5] = {1, 2, 3, 4, 5};
  //Returning pointer to a local variable is an error
  return arr;
}

int * createnewarr2(int elcount) {
  int * ptr = (int *)malloc(elcount * sizeof(int));
  if (ptr == NULL) {
    printf("Error allocating memory");
    exit(1);
  }
  return ptr;
}

int main(void) {

  //Throws segmentation fault: 
  // int * ptr = createnewarr();
  // for (int i = 0; i < 5; i++) {
  //   printf("%d ", ptr[i]);
  // }

  int * ptr = createnewarr2(5);
  for (int i = 0; i < 5; i++) {
    ptr[i] = i;
    printf("%d ", ptr[i]);
  }
  free(ptr);

  return 0;
}