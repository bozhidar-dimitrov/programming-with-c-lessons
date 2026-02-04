#include <stdio.h>

int main(void) {

  int a = 5;
  double b = 8.8;

  //Allowed
  int *p = &a;

  //Allowed but very bad practice
  p = &b;
  printf("b via p: %lf\n", *p);

  //Void pointers can point to any type:
  void * p1 = &a;

  //Allowed:
  p1 = &b;

  //Dereferencing void pointers is not allowed:
  //*p1 = 15;
  //printf("%d\n", *p);

  *((double *)p1) = 7.8;
  printf("%lf\n", *((double *)p1));

  double * p2 = p1;
  printf("%lf\n", *p2);

  return 0;
}