#include <stdio.h>

int main(void) {

  int a = 5;
  double b = 7.7;

  int * p = &a;

  //Bad practice - using int pointer for double variable
  p = &b;
  printf("b via p: %lf\n", *p);

  //Allowed - void pointers can point to variables of any type:
  void * p1 = &a;

  //Allowed
  p1 = &b;

  //We cannot dereference void pointers - this is not allowed:
  //*p1 = 15;
  //printf("%lf\n", *p1);

  //To dereference the pointer we need to typecast it:
  *((double *)p1) = 16.5;
  printf("b via p1 - typecasted: %lf\n", *((double *)p1));

  //Implicit typecasting:
  double * p2 = p1;
  printf("b via p2:: %lf\n", *p2);

  return 0;
}