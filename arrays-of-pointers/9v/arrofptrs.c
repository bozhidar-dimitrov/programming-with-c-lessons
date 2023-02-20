#include <stdio.h>

int main(void) {

  int arr[] = {1, 2, 3};
  int (*p)[3] = &arr; //pointer to array

  int *ptr[3];  //array of pointers

  int a = 5;
  int b = 7;
  int c = 10;

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  for (int i = 0; i < 3; i++) {
    //printf("%d ", *ptr[i]);
    printf("%d ", **(ptr + i));
  }

  return 0;
}