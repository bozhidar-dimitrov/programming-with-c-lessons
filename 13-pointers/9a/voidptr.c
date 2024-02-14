#include <stdio.h>

int main(void) {

  int a = 5;
  double b = 5.75;

  //int * p = &b; //Not allowed

  void * p = &a;
  p = &b;

  *(double *)p = 5.90;
  printf("%lf\n", *(double *)p);

  double * p2 = p;
  printf("%lf\n", *p2);

  return 0;
}