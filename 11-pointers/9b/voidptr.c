#include <stdio.h>

int main(void) {

  int a = 15;
  double b = 5.75;

  int * p = &a;
  //Very bad practice:
  p = &b;
  printf("Double value via int pointer: %lf\n", *p);

  //Void pointers can point to variables of any type:
  void * p1 = &a;
  p1 = &b;

  //Deferencing the void pointer directly is not allowed:
  //*p1 = 3.35;

  //Dereferencing the void pointer via explicit typecasting
  *((double *)p1) = 3.35;
  printf("The value of the variable to which p1 points: %lf\n", *((double *)p1));

  //Implicit typecasting
  double * p2 = p1;
  printf("The value of the variable to which p1 points: %lf\n", *p2);

  return 0;
}