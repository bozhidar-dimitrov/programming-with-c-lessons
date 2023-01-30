#include <stdio.h>

float print(int x, int y) {
  printf("%d-%d\n", x, y);
  return 5.5;
}

int main(void) {
  float (* fptr)(int, int) = print;
  float var = (* fptr)(5, 10);
  printf("%f\n", var);

  return 0;
}