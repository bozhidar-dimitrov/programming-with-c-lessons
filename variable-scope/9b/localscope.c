#include <stdio.h>

int main(void) {
  int a = 7;
  printf("%d\n", a);
  int b = 10;

  {
    printf("%d\n", b);
    int a = 8;
    a++;
    printf("%d\n", a);
    int c = 12;
  }

  //The outer scope doesn't see "c"
  //printf("%d\n", c);

  {
    int x = 10;
  }

  {
    int y = 11;
  }

  for (int i = 0; i < 10; i++) {
    //Can access i
    int z = 10;

  }

  if (a > b) {
    int somevar = 12;
    //somevar only visible in inner scope of if
  }

  return 0;
}