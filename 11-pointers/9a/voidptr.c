#include <stdio.h>

int main(void) {

  int a = 15;
  double b = 5.35;

  //The pointer should of the same type as the variable to which it points
  int * p1 = &a;

  //Very bad practice
  p1 = &b;

  //Gives the wrong value:
  printf("Int pointer to a double value: %lf\n", *p1);

  //Void pointers can point to variables of all types
  void * p2 = &a;
  p2 = &b;

  //Dereferencing void pointers is not allowed
  //*p2 = 15;

  //Explicit typecasting
  b = (double)a;

  //Explicit typecasting the void pointer to change the value
  *((double *)p2) = 3.25;
  printf("Double value: %lf\n",*((double *)p2) );

  //Using implicit typecasting:
  double * p3 = p2;
  printf("Double value: %lf\n", *p3);

  return 0;
}