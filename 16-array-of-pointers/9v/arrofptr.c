#include <stdio.h>

int main(void) {

  int * arr[3];

  int a = 10;
  int b = 15;
  int c = 20;

  arr[0] = &a;
  arr[1] = &b;
  arr[2] = &c;

  for (int i =0 ; i < 3; i++) {
    printf("%d ", *arr[i]);
    printf("%d ", **(arr + i));
  }

  return 0;
}