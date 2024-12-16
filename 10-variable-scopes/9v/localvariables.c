#include <stdio.h>

int main(void) {

  int a = 10;
  //Redefining a variable in the same scope is not allowed => compiler error:
  //int a = 25;
  {
    int b = 15;
    printf("B1-1:%d\n", b);
    printf("A1-1:%d\n", a);
    {
      int c = 20;
      //The variable b in this scope shadows the variable b in the outer scope
      int b = 25;
      printf("C1-1-1:%d\n", c);
      printf("B1-1-1-1:%d\n", b);
    }
  }

  {
    //Redefining the variables in different scopes is allowed
    int b = 30;
    printf("B1-2-1:%d\n", b);
  }

  printf("A0-1:%d\n", a);
  //B is not visible here: => compiler error
  //printf("B0-1:%d\n", b);

  //The conditional operators => opens a new scope
  if (a > 10) {
    //The scope of the variable is inside the conditional operator
    int b = 45;

    //Here again the scope variable a, shadows variable a from the outer scope
    int a = 30;
    if (a > 15) {
      //Here we open inner scope in the if scope
    }
  }

  for (int i = 0; i < 10; i++) {
    //the variable "i" is bound to the scope of the for loop
    printf("%d ", i);
  }

  //Here the variable i is not visible:
  //printf("\n The value of i is %d", i);

  return 0;
}