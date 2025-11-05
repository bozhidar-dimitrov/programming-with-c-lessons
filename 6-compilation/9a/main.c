#include <stdio.h>
#define ARR_SIZE 5

int main(void) {

  //This is array definition:
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5};

  #ifdef WINDOWS
  int myVar = 5;
  #else 
  int myVar = 12;
  #endif

  return 0;
}