#include <stdio.h>

void foo(int a) {
  {
    int a = 10;
    printf("%d", a);
  }
}

int main(void) {
  int b = 10;
  {
    int a = 10;
    printf("%d\n", a);
    int b = 15;
    printf("B-1-%d\n", b);
    {

    }
  }
  printf("B-outside:%d\n", b);

  {
    int a = 15;
    printf("%d\n", a);
    int f = 10;
    printf("%d\n", f);
  }
  //printf("%d\n", f) - f is undefined;
  if (b > 3) {
    int c = 10;
    if (b > 5) {
      printf("%d\n",c); //here c is in scope
    }
  }
  //cannot access c outside of if

  for (int i = 10; i < 10; i++) {
    int d = 10;
    //can access i and d
  }
  //here i and d are out of scope

  return 0;
}