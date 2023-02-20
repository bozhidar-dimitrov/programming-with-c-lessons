#include <stdio.h>

int main(void) {

  int array[3] = {1, 2, 3};
  int (*arr)[3] = &array; //pointer to an array

  int *ptr[3]; //array of pointers

  int a = 5;
  int b = 7;
  int c = 10;

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  for (int i = 0; i < 3; i++) {
    printf("%d ", *ptr[i]);
  }

  return 0;
}