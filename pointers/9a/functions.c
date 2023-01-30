#include <stdio.h>

void setxtofive(int * x) {
  *x = 5;
}

int main(void) {
  
  int a = 15;
  setxtofive(&a);
  printf("%d\n", a);

  return 0;
}