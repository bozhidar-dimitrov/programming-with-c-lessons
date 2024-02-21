#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  printf("&a:%p\n", &a);
  printf("p:%p\n", p);
  printf("*p:%d\n", *p);
  printf("a:%d\n", a);

  printf("&p:%p\n", &p);

  //Declaring double pointers
  int **pp = &p;
  printf("pp:%p\n", pp);

  printf("*pp:%p\n", *pp);
  printf("**pp:%d\n", **pp);

  return 0;
}