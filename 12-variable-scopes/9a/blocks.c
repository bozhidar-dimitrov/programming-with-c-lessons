#include <stdio.h>

int main(void) {
  int b = 10;
  {
    int a = 5;
    int b = 11;
    printf("B-1:%d\n", b);
    {
      int b = 12;
      printf("B-1-2:%d\n", b);
    }
  }
  {
    int a = 6;
    int f = 11;
    printf("B-2:%d\n", b);
    printf("%d ", f);
  }
  printf("%d ", f);

  if (b > 3) {
    int b = 15;
  }

  for (int i = 0; i < 5; i++) {
    //here we can access the variable i
  }
  //here we cannot access the variable i

  return 0;
}