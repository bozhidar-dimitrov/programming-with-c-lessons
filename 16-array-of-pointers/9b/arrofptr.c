#include <stdio.h>

int main(void) {

  //Array of pointers;
  int * ptr[3];

  int a = 10;
  int b = 15;
  int c = 20;

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  for (int i = 0; i < 3; i++) {
    printf("%d ", *ptr[i]);
    printf("%d ", **(ptr + i));
  }

  return 0;
}