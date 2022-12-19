#include <stdio.h>

int foo(int a){
  int b = 10;
  int a = 7;
  a++;
  printf("In function: %d\n", a);
}

int main(void) {
  int a = 5;
  int b = 15;
  printf("%d\n", a);

  {
    int a = 10;
    printf("%d\n", a);

    printf("%d\n", b);

    int c = 7;
    {
      printf("%d\n", c);
    }
  }

  {
    int c = 8;
    printf("%d\n", c);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", a);
    {
      printf("%d ", i);
    }
  }

  int x = 7;
  foo(x);
  printf("%d \n", x);

  return 0;
}