#include <stdio.h>

int main(void) {

  int a = 5;
  //This is not allowed: 
  // int a = 10;
  {
    int b = 15;
    printf("A:%d\n", a);
    printf("B:%d\n", b);
    {
      int b = 20;
      //B shaodws the variable in the parent scope;
      printf("B 1-1:%d\n", b);
      printf("A 1-1:%d\n", a);
    }
    printf("B-1 second time:%d\n", b);
  } 

  {
    int c = 10;
    {
      //Here c is visible
    }
    //Here the variable "c" is released - in the end of the scope
  }

  {
    //This is allowed - c variables are declared in different scopes
    int c = 20;
  }

  //Variable c is not visible in this scope:
  //printf("%d\n", c);

  if (a > 5) {
    int b = 10;
    if (a > 3) {
      int b = 5;
    }
  }

  for (int i = 0; i < 10; i++) {
    //Here is the variable scope of the variable "i"
  }

  return 0;
}