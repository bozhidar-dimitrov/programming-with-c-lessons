#include <stdio.h>

int main(void) {

  int a = 5;
  int b = 9;
  {
    //Shadowing - a shadows a
    printf("Before shadows:%d", a);
    int a = 7;
    b++;
    int c = 9;
    
  }
  //Not allowed - doesn't see "c"
  //printf("%d\n", c);
  {
    int c = 10;
  }

  printf("%d\n", a);

  for (int i = 0; i < 10; i++) {
    if (a > b) {
      int x = 10;
    }
  }

  return 0;
}