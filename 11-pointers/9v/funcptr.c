#include <stdio.h>

double sum(int a, float b) {
  double result = a + b;
  return result;
}

int main(void) {

  //Pointer to a function
  double (*fptr)(int, float) = sum;

  //Method 1 of calling the function via function pointer
  double r1 = (*fptr)(5, 5.5);
  printf("%lf\n", r1);

  //Method 2 of calling the function via function pointer
  double r2 = fptr(8, 7.9);
  printf("%lf\n", r2);

  return 0;
}