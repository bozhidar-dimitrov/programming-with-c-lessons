#include <stdio.h>

double sum(int a, double b) {
  return a + b;
}

int main(void) {

  double (*fptr)(int, double) = sum;

  //Calling the function via the function pointer
  double result1 = (*fptr)(5, 10.5);
  printf("Result: %lf\n", result1);

  //Alternative way to call the function via the function pointer
  double result2 = fptr(10, 7.5);
  printf("Result: %lf\n", result2);

  return 0;
}