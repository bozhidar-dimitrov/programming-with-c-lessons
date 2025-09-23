#include <stdio.h>

int main(void) {

  int a1 = 1;
  printf("While:\n");
  //0+
  while (a1 <= 5) {
    printf("a1:%d\n", a1);
    a1++;
  }
  printf("Do while:\n");
  a1 = 1;
  //1+
  do {
    printf("a1:%d\n", a1);
    a1++;
  } while(a1<=5);

  for (int i = 1; i <= 5; i++) {
    printf("i:%d\n", i);
  }

  return 0;
}