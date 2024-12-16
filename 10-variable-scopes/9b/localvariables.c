#include <stdio.h>

int foo() {
  int b = 0;
}

int main(void) { //Start block of code

  int a = 10;
  //Redefinition of variables in the same scope is not allowed
  //int a = 15;
  {
    int b = 15;
    printf("B-1-1 %d\n", b);
    printf("A-1-1 %d\n", a);
    {
      int b = 30; 
      printf("B-1-1-1 %d\n", b);
    }
    printf("B-1-1(2) %d\n", b);
  }
  //B is not visible here => compiler error
  //printf("B-1 %d\n", b);
  printf("A-1 %d\n", a);
  {
    int b = 20;
    printf("B-1-2 %d\n", b);
  }

  if (a > 10) {
    int a = 10; //Lives and is visible only in the conditional operators scope
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  //This is not allowed (i is not visible outside the for loop scope)
  //printf("\n%d", i);

  return 0;
} //Ends block of code