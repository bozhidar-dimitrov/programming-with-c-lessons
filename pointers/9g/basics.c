#include <stdio.h>

int main(void) {
  
  int a = 10;
  printf("%p\n", &a);
  
  printf("%zu\n", sizeof(a));

  int * p = &a;
  printf("%p\n", p);
  *p = 7;

  printf("%d\n", a);


  int b = 17;
  int c = 15;

  int *y = &b;
  int *z = y;
  int *m = z;
  z = &c;
  *m = 15;
  printf("%d\n", *z);

  return 0;
}