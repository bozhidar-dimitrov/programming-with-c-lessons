#include <stdio.h>

int main(void) {

  int a = 10;
  double b = 5.75;

  int * p = &a; //allowed
  //p = &b; //not allowed

  void * p1 = &a; //allowed
  p1 = &b; //allowed

  //*p1 = 5.5; //not allowed
  //Solving the problem using explicit typecasting
  *(double *)p1 = 5.5;
  printf("%lf \n", *(double *)p1);

  //Solving the problem using implicit typecasting
  double * ptr = p1;
  printf("%lf \n", *ptr);

  return 0;
}