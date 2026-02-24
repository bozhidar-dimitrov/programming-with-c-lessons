#include <stdio.h>

int main(void) {

  int a = 5;
  int b = 10;
  int c = 15;

  //Array of pointers
  int * ptr[3];

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  for (int i = 0; i < 3; i++) {
    //printf("%d ", *ptr[i]);
    printf("%d ", **(ptr + i));
  }

  return 0;
}