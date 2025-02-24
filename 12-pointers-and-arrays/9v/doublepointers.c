#include <stdio.h>

int main(void) {

  int a = 10;
  int *p = &a;

  printf("Address of P: %p\n", &p);
  //We store the address of a pointer into a double pointer
  int **pp = &p;
  //*pp -> returns the address of a (the one stored in p)
  //**pp -> returns the value of a
  //Prints the address of "a":
  printf("Address of a via p: %p\n", p);
  printf("Address of p: %p\n", &p);
  printf("Address of p via pp: %p\n", pp);

  printf("The address of a, stored in p via pp:%p\n", *pp);
  printf("The value of a via pp:%d\n", **pp);

  //int ***ppp = &pp - we can have n-dimensional pointers

  return 0;
}