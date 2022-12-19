#include <stdio.h>

int main(void) {
  int a = 10;
  printf("%d\n", a);
  int b = 7;

  {
    //Shadowing - a shadows a
    int a = 7;
    printf("%d\n", a);
    b++;
    printf("B:%d\n", b);
    int c = 10;
    {
      
    }
    int x = 11;
  }

  {
    int x = 12;
  }

  for (int i = 0; i < 10; i++) {
    int b = 10;
    //
  }

  if (a > b) {
    int y = 10;
  }

  printf("B:%d\n", b);

  //Doesn't see "c";
  //printf("C:%d\n", c);

  return 0;
}