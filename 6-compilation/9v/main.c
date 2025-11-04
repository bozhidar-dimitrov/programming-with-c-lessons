#include <stdio.h>

#define ARR_SIZE 5

int main(void) {

  //Here we are defining an array
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5};

  #ifdef WINDOWS
  int mayVar = 5;
  #else
  int myVar = 12;
  #endif

  return 0;
}