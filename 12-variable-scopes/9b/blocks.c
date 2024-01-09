#include <stdio.h>

int foo(int a) {
  int b = 10;
  int c = 15;
  {
    int a = 10;
  }
  return a;
}

int main(void) {
  int b = 11;
  {
    int a = 10;
    printf("%d\n", a);
    int b = 15;
    printf("B-1:%d\n", b);
    {
      int b = 23;
      printf("B-1-1:%d\n", b);
    }
  }
  {
    int a = 11;
    printf("%d\n", a);
    int f = 20;
  }
  printf("B-outside:%d\n", b);
  //printf("%d\n", f); - error, f is not visible in parent scope
  if (b > 3) {
    int c = 10;
    if (b < 10) {
      printf("%d", c);
    }
  }
  //we cannot acces c here
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
  //cannot acces i here
  return 0;
}