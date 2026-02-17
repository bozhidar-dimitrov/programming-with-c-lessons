#include <stdio.h>

int main(void) {

  float * arrays = (float *)malloc(300);
  if (arrays == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  //If we forgot to call free here and allocate new memory...
  //free(arrays);
  arrays = (float *)malloc(400);
  if (arrays == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  //We loose the pointer to the originally allocated memory:
  //This is a memory leak!

  return 0;
}