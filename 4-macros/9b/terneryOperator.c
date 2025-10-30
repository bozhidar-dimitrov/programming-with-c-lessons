#include <stdio.h>

int main(void) {

  int a = 5;
  int b = 7;
  int c = 0;

  if (a > b) {
    c = a;
  } else {
    c = b;
  }

  int c1 = a > b ? a : b;
  printf("%d\n", c1);

  return 0;
}