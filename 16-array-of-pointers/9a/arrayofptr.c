#include <stdio.h>

int main(void) {

  int * ptr[3];
  int a = 5;
  int b = 10;
  int c = 15;

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  for (int i = 0; i < 3; i++){
    printf("%d ", *ptr[i]);
    //Using address aritmetic:
    printf("%d ", **(ptr+i));
  }

  return 0;
}