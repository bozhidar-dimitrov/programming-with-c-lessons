#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a; 

  printf("Address of p: %p\n", &p);

  int **pp = &p;
  printf("Print the address of a via p: %p\n", p);
  printf("Print the address of p via pp: %p\n", pp);
  printf("Prints the address of a stored in p via pp: %p", *pp);
  printf("The value of a via pp: %p", **pp);

  int ***ppp = &pp; //In c we have n-dimensional pointers


  return 0;
}