#include <stdio.h>

int main(void) {

  int a = 5;
  double b = 5.75;

  //int * p = &b; //Not allowed

  void * p = &a;
  p = &b; //Allowed

  //*p = 9.25; //Not allowed
  *(double *)p = 9.25;
  printf("%lf\n", *(double *)p);


  return 0;
}