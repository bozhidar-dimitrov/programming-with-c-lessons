#include <stdio.h>

int main(void) {
  
  int a = 10; //0000 0000 0000 0000 0000 0000 0000 1010
  printf("%p\n", &a);

  int *p = &a;
  printf("%p\n", p);
  printf("%p\n", &p); //address of the pointer variable

  printf("%d\n", *p);
  *p = 15;
  printf("%d\n", a);

  int x1 = 12;
  int x2 = 15;

  int *k = &x1;
  int *z = k;

  k = &x2;

  printf("%d\n", *z);
  printf("%d\n", *k);

  *z = 21;

  printf("%d\n", *z);
  printf("%d\n", *k);
  printf("%d\n", x1);

  float b1 = 5.5;
  float * l2 = &b1;

  //sizeof(l2) = 4 - 32 bit architecture / 8 - 64 bit architecture

  

  return 0;
}