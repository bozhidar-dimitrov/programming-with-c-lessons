#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  printf("Address stored in p: %p\n", p);
  printf("Address of pointer p: %p\n", &p);

  //Double pointer:
  int ** pp = &p;

  printf("Address stored in pp: %p\n", pp);
  printf("Address of variable a: %p\n", *pp);
  printf("Value of a: %d\n", **pp);

  //Triple pointer: stores the address of double pointer;
  int ***ppp = &pp;

  //We can have n-dimensional pointers

  return 0;
}