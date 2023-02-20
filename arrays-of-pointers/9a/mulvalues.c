#include <stdio.h>

void setAB(int * a, int * b) {
  *a = 5;
  *b = 10;
}

double divide(int a, int b, int * error) {
  if (b ==0) {
    *error = 1;
    return 0;
  }

  *error = 0;
  return a / b;
}

int main(void) {
  int a = 0;
  int b = 0;

  setAB(&a, &b);

  printf("%d\n", a);
  printf("%d\n", b);

  int error = 0;
  double result = divide(5, 0, &error);
  if (error) {
    printf("There is an error\n");
  } else {
    printf("%lf\n", result);
  }

  return 0;
}