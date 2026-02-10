#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a; 

  printf("Address stored in p: %p\n", p);
  printf("Address of p: %p\n", &p);

  //Double pointer: stores the address of another pointer
  int ** pp = &p;
  printf("Address stored in pp: %p\n", pp);
  printf("Address of a: %p\n", *pp);
  printf("Value of a: %d\n", **pp);

  return 0;
}