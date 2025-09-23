#include <stdio.h>

int main(void) {

  int a = 1;
  //0+
  while (a <= 5) {
    printf("%d\n", a);
    a++;
  }

  a = 1;
  //1+
  do {
    printf("%d\n", a);
    a++;
  } while (a <= 5);

  for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  return 0;
}