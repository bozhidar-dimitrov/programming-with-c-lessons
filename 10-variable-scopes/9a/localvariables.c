#include <stdio.h>

void foo(){
  int b = 10;
}

int main(void) {

  foo();
  int a = 10;
  //Redefinition of a variable in the same scope is not allowed => compiler error
  //int a = 15;
  {
    int b = 15;
    printf("B-1-1:%d\n", b);
    printf("A-1-1:%d\n", a);
    {
      //B shadows the outer scope variable
      printf("B-1-1-1(outer):%d\n", b);
      int b = 30;
      printf("B-1-1-1:%d\n", b);
    }
    printf("B-1-1(2):%d\n", b);
  }
  printf("A-1:%d\n", a);
  {
    int b = 20;
    printf("B-1-2:%d\n", b);
  }

  //Variable b is not visisble in this scope => compiler error:
  //printf("B-1:%d\n", b);

  if (a > 10) {
    //This variable a, shadows the outer scope variable
    int a = 10; 
  }

  for (int i = 0; i < 10; i++) {
    //Inner loop variable shadows the outer loop variable
    for (int i = 0; i < 10; i++) {
      printf("%d ", i);
    }
  } 

  printf("\n");
  //The second for uses the same variable name "i"
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }

  //the variable i is not visible outside the scope
  //printf("\n%d", i);

  return 0;
}