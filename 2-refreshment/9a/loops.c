#include <stdio.h>

int main(void) {

  //while
  int a = 1;
  //0+
  while (a <= 5) {
    printf("A=%d\n", a);
    a++;
  }

  //1+
  do {
    printf("A=%d\n", a);
    a++;
  } while (a <= 5);

  //do while

  //for
  for (int i = 1; i <= 5; i++) {
    printf("I=%d\n", i);
  }

  return 0;
}