#include <stdio.h>

int main(void) {

  int array[3] = {1, 2, 3};
  int (*ptr)[3] = &array; //pointer to an array

  int *p[3]; //array of pointer

  int a = 5;
  int b = 7;
  int c = 10;

  p[0] = &a;
  p[1] = &b;
  p[2] = &c;

  for (int i = 0; i < 3; i++) {
    //printf("%d ", *p[i]);
    printf("%d ", **(p+i));
  }

  return 0;
}