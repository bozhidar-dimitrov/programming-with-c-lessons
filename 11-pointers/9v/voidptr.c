#include <stdio.h>

int main(void) {

  int a = 15;
  double b = 5.35;

  int * p = &a;

  //Very bad practice:
  p = &b;
  //Can give error values:
  printf("Double value: %lf\n", *p);

  //Void pointers can point to variables of any type:
  void * p1 = &a;
  p1 = &b;

  //Dereferencing void pointers is not allowed:
  //*p1 = 15;

  //Using explicit typecasting:
  *((double *)p1) = 3.35;
  printf("Printing the void pointer: %lf", *((double *)p1));

  //Using implicit typecasting:
  double * p2 = p1;
  printf("Printing the void pointer: %lf", *p2);

  return 0;
}