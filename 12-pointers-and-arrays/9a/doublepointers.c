#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  printf("Address stored in the pointer: %p\n", p);
  printf("Address of the pointer: %p\n", &p);

  //Double pointer - stores the address of another pointer
  int **pp = &p;

  printf("Address stored in the double pointer: %p\n", pp);
  printf("Address stored in the single pointer (p): %p\n", *pp);
  printf("The value of the variable a: %d\n", **pp);

  //The address of the pp is stored in triple pointer:
  int ***ppp = &pp;

  //So we can have - n-dimensional pointers

  return 0;
}