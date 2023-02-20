#include <stdio.h>

void setAandB(int *a, int *b) {
  *a = 10;
  *b = 15;
}

double divide(double a, double b, int * error) {
  if (b == 0) {
    *error = 1;
    return 0;
  }

  *error = 0;
  return a / b;
}

int main(void) {

  int a = 0;
  int b = 0;

  setAandB(&a, &b);

  int error = 0;
  double result = divide(5, 0, &error);
  if (error) {
    printf("There is an error\n");
  } else {
    printf("The result is %lf\n", result);
  }

  printf("%d\n", a);
  printf("%d\n", b);


  return 0;
}