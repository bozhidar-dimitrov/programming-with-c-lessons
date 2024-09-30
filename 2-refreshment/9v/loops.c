#include <stdio.h>

int main(void) {
  int a = 5;
  while (a < 5) {
    printf("%d\n", a);
    a++;
  }

  int b = 5;
  do {
    printf("%d\n", b);
    b++;
  } while (b < 5);

  for (int c = 0; c < 5; c++){
    printf("%d\n", c);
  }

  return 0;
}