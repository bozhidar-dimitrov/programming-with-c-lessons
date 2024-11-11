#include <stdio.h>

#define MAX_SIZE 5

int main(void) {

  //This is our simple array
  int arr[MAX_SIZE] = {1, 2, 3, 4, 5};

  #if MAX_SIZE > 10
  int myvar = 10;
  #else
  int anothervar = 5;
  #endif

  return 0;
}