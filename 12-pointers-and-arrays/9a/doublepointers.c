#include <stdio.h>

int main(void) {

  int a = 10;
  int * p = &a;

  //Taking the address of a pointer
  printf("%p\n", &p);

  //*p => int
  
  //Double pointer
  int ** pp = &p;
  //*pp => int *

  //Prints the address of the variable a
  printf("%p\n", p);

  //Prints the address of the pointer p
  printf("%p\n", &p);

  //Prints the address of the pointer p via the double pointer pp
  printf("%p\n", pp);

  //The address of the variable a, stored in p
  printf("%p\n", *pp);

  //The the value of a:
  printf("%d\n", **pp);

  //We can have n-dimensional pointers by adding * to the pointer type

  return 0;
}