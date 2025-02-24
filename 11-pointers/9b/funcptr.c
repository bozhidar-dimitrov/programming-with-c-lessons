#include <stdio.h>

double sum(int a, float b) {
  return a + b;
}

int main(void) {

  double (*fptr)(int, float) = sum;

  //Calling the function via the function pointer
  double result1 = (*fptr)(5, 10.5);
  printf("Result: %lf\n", result1);

  //Alternative way of calling the function via the function pointer
  double result2 = fptr(5, 5.5);
  printf("Result: %lf\n", result2);

  return 0;
}