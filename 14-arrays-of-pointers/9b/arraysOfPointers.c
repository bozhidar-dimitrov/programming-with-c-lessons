#include <stdio.h>

int main(void) {

  int a = 5;
  int b = 10;
  int c = 15;

  int *arrOfPtr[3];

  arrOfPtr[0] = &a;
  arrOfPtr[1] = &b;
  arrOfPtr[2] = &c;

  for (int i = 0; i < 3; i++){
    //printf("%d ", *arrOfPtr[i]);
    //Using address arithmetic
    printf("%d ", **(arrOfPtr + i));
  }

  return 0;
}