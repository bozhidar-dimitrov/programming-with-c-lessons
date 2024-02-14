#include <stdio.h>

double test(int a, int b) {
  if (b != 0){
    return a / (double)b;
  } else {
    return 0;
  }
}

int main(void) {
  
  double (*fptr)(int, int) = test;
  double result = (*fptr)(5, 10);
  printf("%lf\n", result);

  //Alternative calling of functions via function pointer
  double result2 = fptr(5, 10);
  printf("%lf\n", result2);

  return 0;
}