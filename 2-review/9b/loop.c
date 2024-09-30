#include <stdio.h>

int main(void) {

  int i = 1;
  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }

  int i1 = 1;
  do {
    printf("%d\n", i1);
    i1++;
  } while (i1 <= 10);

  for (int i2 = 1; i2 <= 10; i2++) {
    printf("%d\n", i2);
  }

  return 0;
}