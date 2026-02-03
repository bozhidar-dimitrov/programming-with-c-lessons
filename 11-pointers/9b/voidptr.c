#include <stdio.h>

int main(void) {

  int a = 6;
  double b = 5.5;

  int * p = &a;

  //Allowed by the compiler, but very bad pracice:
  p = &b;
  printf("d via p: %lf\n", *p);

  //Allowed:
  void * p1 = &a;

  //Allowed:
  p1 = &b;

  //Dereferencing void pointers is not allowed:
  //*p1 = 15;
  //printf("%d", *p1);

  //Explicitely typecasting pointers
  *((double *)p1) = 7.5;
  printf("b via p1: %lf\n", *((double *)p1));

  //Implicitely typecasting pointers
  double * p2 = p1;
  printf("b via p2: %lf\n", *p2);

  return 0;
}