#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int * ptr = (int *) calloc(3, sizeof(int));
  ptr[0] = 5;
  ptr[1] = 7;
  ptr[2] = 12;
  //ptr[3] = 15; - not allowed, out of bounds

  ptr = (int *) realloc(ptr, 4 * sizeof(int));
  ptr[3] = 15; //allowed now we have allocated memory
  
  ptr = (int *) realloc(ptr, 2 * sizeof(int));
  //We can access only elements 0 and 1
  printf("%d\n", ptr[0]);
  printf("%d\n", ptr[1]);

  return 0;
}