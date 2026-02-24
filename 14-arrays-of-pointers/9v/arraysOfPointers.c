#include <stdio.h>

int main(void) {

  int a = 5;
  int b = 10;
  int c = 15;

  //Array of pointers:
  //Each element of the array is a pointer
  int * arrayOfPointers[3];

  arrayOfPointers[0] = &a;
  arrayOfPointers[1] = &b;
  arrayOfPointers[2] = &c;

  for (int i = 0; i < 3; i++) {
    //printf("%d ", *arrayOfPointers[i]);
    printf("%d ", **(arrayOfPointers + i));
  }

  return 0;
}