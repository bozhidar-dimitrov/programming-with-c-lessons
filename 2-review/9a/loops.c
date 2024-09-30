#include <stdio.h>

int main(void) {
  int i = 1;
  //0+ loops
  while (i <= 5) {
    printf("%d\n", i);
    i++;
  }

  int i1 = 1;
  //1+ loops
  do {
    printf("%d\n", i1);
    i1++;
  } while (i1 <= 5);

  for (int i3 = 1; i3 <= 5; i3++) {
    printf("%d\n", i3);
  }

  return 0;
}