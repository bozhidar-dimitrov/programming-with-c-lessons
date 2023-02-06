#include <stdio.h>

int main(void) {

  int a = 15;
  int *p = &a; //type of *p == int
  //int *pp = &p; //error: type of *pp != int *
  int **pp = &p; //type *pp == int *

  printf("&a=%p\n", &a);
  printf("p=%p\n", p);
  printf("&p=%p\n", &p);
  printf("pp=%p\n", pp);
  printf("&pp=%p\n", &pp);

  printf("p=%p\n", p);
  printf("*pp=%p\n", *pp);
  printf("**pp=%d\n", **pp);

  return 0;
}